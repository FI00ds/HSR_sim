#include <stdio.h>
#include <math.h>
#include "base_character.h"
#include "traces.h"
#define CHARACTER_COUNT 45
/*
Select the 4 team members
Equip them with their respective relics+lightcone
check for set effects
calculate final stats
select scenario (50% energy for MOC, 0% otherwise)
load action scripts, check for conflicts with characters | not needed for manual play mode
Start simulation
*/
void character_select(int* team, int* idlist, int* idindex){
    int valid_inputs=1;
    do
    {
        if (!valid_inputs) printf("You must select 4 different and valid character IDs, please try again");
        valid_inputs=1;
        printf("Select your team by inputting their character id");
        int member1=0, member2=0, member3=0, member4=0;
        scanf("%d%d%d%d", &member1, &member2, &member3, &member4);
        *team = member1; *(team+1) = member2; *(team+2) = member3; *(team+3) = member4;
        for (int i = 0; i < 4; i++){    //Check for unicity of selected characters
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
                    *(idindex+i) = j;
                }
            }
        }
        if (*(valid)==0 || *(valid+1)==0 || *(valid+2)==0 || *(valid+3)==0) valid_inputs=0;
    } while (!valid_inputs);
};

int main(){
    int idlist[CHARACTER_COUNT]={
                                8002, 8004, 1211, 1209, 1206, 1202, 1201, 1109, 1108, 1107,
                                1106, 1105, 1104, 1103, 1102, 1101, 1013, 1009, 1008, 1004,
                                1003, 1002, 1001, 1204, 1006, 1207, 1203, 1205, 1111, 1005,
                                1213, 1208, 1110, 1212, 1210, 1112, 1217, 1302, 1215, 1303,
                                1214, 1305, 1307, 1306, 1312};
    struct Base_Character bcidlist[CHARACTER_COUNT]={
                                bcid8002, bcid8004, bcid1211, bcid1209, bcid1206, bcid1202, bcid1201, bcid1109, bcid1108, bcid1107,
                                bcid1106, bcid1105, bcid1104, bcid1103, bcid1102, bcid1101, bcid1013, bcid1009, bcid1008, bcid1004,
                                bcid1003, bcid1002, bcid1001, bcid1204, bcid1006, bcid1207, bcid1203, bcid1205, bcid1111, bcid1005,
                                bcid1213, bcid1208, bcid1110, bcid1212, bcid1210, bcid1112, bcid1217, bcid1302, bcid1215, bcid1303,
                                bcid1214, bcid1305, bcid1307, bcid1306, bcid1312};
    struct traces tcidlist[CHARACTER_COUNT]={
                                trid8002, trid8004, trid1211, trid1209, trid1206, trid1202, trid1201, trid1109, trid1108, trid1107,
                                trid1106, trid1105, trid1104, trid1103, trid1102, trid1101, trid1013, trid1009, trid1008, trid1004,
                                trid1003, trid1002, trid1001, trid1204, trid1006, trid1207, trid1203, trid1205, trid1111, trid1005,
                                trid1213, trid1208, trid1110, trid1212, trid1210, trid1112, trid1217, trid1302, trid1215, trid1303,
                                trid1214, trid1305, trid1307, trid1306, trid1312};
//select your characters
    int team[4];
    int idindex[4];
    character_select(team, idlist, idindex);

//equip characters with their relics+lightcones

    struct stat_boost test = {"HP", 0.04};
    printf("%f", test.amount);
}