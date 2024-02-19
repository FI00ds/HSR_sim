#include <stdio.h>
#include <math.h>
#include "base_character.h"
#include "set_bonus.h"

/*
Select the 4 team members
Equip them with their respective relics+lightcone
check for set effects
calculate final stats
select scenario (50% energy for MOC, 0% otherwise)
Start simulation
*/


int main(){
    struct stat_bonus hat = {"hp", 0.16};
    printf("%f", hat.amount);
}