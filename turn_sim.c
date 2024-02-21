#include <stdio.h>
#include <math.h>
#include "base_character.h"
#include "traces.h"

/*
Select the 4 team members
Equip them with their respective relics+lightcone
check for set effects
calculate final stats
select scenario (50% energy for MOC, 0% otherwise)
load action scripts, check for conflicts with characters | not needed for manual play mode
Start simulation
*/


int main(){
    struct stat_boost test = {"HP", 0.04};
    printf("%f", test.amount);
}