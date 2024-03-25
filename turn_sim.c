#include <stdio.h>
#include <math.h>
#include<sqlite3.h>
#include<stdlib.h>
#include "traces.h"
#define CHARACTER_COUNT 45
#define LIGHTCONE_COUNT 93
#define DATABASE 'data.db'

int idlist[CHARACTER_COUNT];

char *fetchid = "SELECT id FROM base_character;";

/*
Select the 4 team members
*/
void character_select(int *team, int *idlist){
    int valid_inputs=1;
    do
    {
        if (!valid_inputs) printf("You must select 4 different and valid character IDs, please try again\n");
        valid_inputs=1;
        printf("Select your team by inputting their character id\n");
        int member1=0, member2=0, member3=0, member4=0;
        scanf("%d %d %d %d", &member1, &member2, &member3, &member4);
        *team = member1; *(team+1) = member2; *(team+2) = member3; *(team+3) = member4;
        for (int i = 0; i < 3; i++){    //Check for unicity of selected characters
            for ( int j=i+1; j<4; j++){
                if (*(team+i)==*(team+j)){
                    valid_inputs=0;
                }
            }
        }
        int valid[4]={0,0,0,0};
        for (int i = 0; i < 4; i++){    //Check for validity of selected characters
            for (int j=0; j < CHARACTER_COUNT; j++){
                if(*(team+i)==*(idlist+j)){
                    *(valid+i) = 1;
                }
            }
        }
        if (*(valid)==0 || *(valid+1)==0 || *(valid+2)==0 || *(valid+3)==0) valid_inputs=0;
    } while (!valid_inputs);
    return;
};

void equipment_get(){

};

static int idlistfill(void *NotUsed, int argc, char **argv, char **azColName){
    int i=0;
    printf("%s = %d", azColName, argv);
    //idlist[i++] = *argv;
};

int main(){
    sqlite3 *db;
    char **zErrMsg = 0;
    int rc;
//select your characters
    int team[4];
    int idindex[4];
    rc = sqlite3_open("data.db", &db);
    if( rc ) {
        fprintf(stderr, "Can't open database: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stdout, "Opened database successfully\n");
    }

    rc = sqlite3_exec(db, fetchid, idlistfill, 0, zErrMsg);
    //character_select(team, idlist);

//equip characters with their relics+lightcones
    //equipment_get();
rc = sqlite3_close(db);
return 0;
}