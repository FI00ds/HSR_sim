#include <stdio.h>
#include <math.h>
#include "base_character.h"
#include "traces.h"
#define CHARACTER_COUNT 45
#define LIGHTCONE_COUNT 93
/*
Select the 4 team members
Equip them with their respective relics+lightcone
check for set effects
calculate final stats
select scenario (50% energy for MOC, 0% otherwise)
load action scripts, check for conflicts with characters | not needed for manual play mode
Start simulation
*/
void character_select(int* team, int* idlist){
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

int main(){
    int idlist[CHARACTER_COUNT]={
                                8002, 8004, 1211, 1209, 1206, 1202, 1201, 1109, 1108, 1107,
                                1106, 1105, 1104, 1103, 1102, 1101, 1013, 1009, 1008, 1004,
                                1003, 1002, 1001, 1204, 1006, 1207, 1203, 1205, 1111, 1005,
                                1213, 1208, 1110, 1212, 1210, 1112, 1217, 1302, 1215, 1303,
                                1214, 1305, 1307, 1306, 1312};
//select your characters
    int team[4];
    int idindex[4];
    character_select(team, idlist);

//equip characters with their relics+lightcones
    equipment_get();


}