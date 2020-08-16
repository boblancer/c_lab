//
//  main.c
//  BobLancer lab
//
//  Created by sasithorn wu on 9/22/18.
//  Copyright © 2018 boblancer. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {

    char name[21];
    int base_agi, base_str, base_int, level;
    float rate_agi, rate_str, rate_int;

    printf("Enter your character name: ");
    scanf(" %s", name);

    do{
        printf("Enter your character base agility and agility growth rate: \n");
        scanf(" %d %f", &base_agi, &rate_agi);
    }
    while(base_agi < 0 || rate_agi < 0 );

    do{
        printf("Enter your character base strength and strength growth rate: \n");
        scanf(" %d %f", &base_str, &rate_str);
    }
    while(base_str < 0 || rate_str < 0 );

    do{
        printf("Enter your character base intelligence and intelligence growth rate: \n");
        scanf(" %d %f", &base_int, &rate_int);
    }
    while(base_int < 0 || rate_int < 0 );

    do{
        printf("Enter your character level: \n");
        scanf(" %d", &level);
    }
    while(level < 0 || rate_int > 25 );

    printf("\nCharacter's stat growth\n");
    printf("-----------------------------\n");
    printf("Agi: %2d %+-5.1f * level\n", base_agi, rate_agi);
    printf("Str: %2d %+-5.1f * level\n", base_str, rate_str);
    printf("Int: %2d %+-5.1f * level\n\n", base_int, rate_int);

    printf("\n%s current stat Level: %d\n", name, level);
    printf("-----------------------------------------\n");
    printf("Agility     | %4d\n", (int)(base_agi + rate_agi * level));
    printf("Strength    | %4d\n", (int)(base_str + rate_str * level));
    printf("Intelligence| %4d\n\n", (int)(base_int + rate_int * level));

}


void star(n){
    if (n < 1)
        return;
    printf("*");
    star(n- 1);
    printf("*");
}
void space(n){
    if (n < 1)
        return;
    printf(" ");
    space(n-1);
}
void row(n, n2){
    space(n);
    star(n2);
    space(n);

}
int main(){

    row(2,1);
    printf("\n");
    row(1,2);
    printf("\n");
    row(0,3);
    printf("\n");
    row(1,2);
    printf("\n");
    row(2,1);
    printf("\n");
}

int main(){
    int rammy, razz;
    int rammy_time, razz_time;

    printf("Enter rammy start and stay time: ");
    scanf(" %d %d", &rammy, &rammy_time);

    printf("Enter razz start and stay time: ");
    scanf(" %d %d", &razz, &razz_time);

    if(razz + razz_time < rammy && razz + razz_time > rammy + rammy_time)
        printf("Sud lhor Ladkrabang");
    else
        printf("he fucked up");
}

int main(){
    int rammy, razz, rob;
    int rammy_time, razz_time, rob_time;

    printf("Enter rammy start and stay time: ");
    scanf(" %d %d", &rammy, &rammy_time);

    printf("Enter razz start and stay time: ");
    scanf(" %d %d", &razz, &razz_time);
    
    printf("Enter rob start and stay time: ");
    scanf(" %d %d", &rob, &rob_time);
    

    
    printf("%d %d truth %d\n", razz + razz_time, rammy, razz + razz_time < rammy);
    printf("%d %d truth %d\n", razz + razz_time, rammy + rammy_time, rob + rob_time > rammy + rammy_time);
    
    if((razz + razz_time < rammy || razz  > rammy + rammy_time)&&
       (rob + rob_time < rammy || rob  > rammy + rammy_time )&&
       (rob + rob_time < razz || rob  > razz +razz_time ))
        printf("Sud lhor Ladkrabang\n");
    else
        printf("he fucked up\n");
}







