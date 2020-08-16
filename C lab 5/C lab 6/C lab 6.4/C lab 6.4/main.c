//
//  main.c
//  C lab 6.4
//
//  Created by sasithorn wu on 9/14/18.
//  Copyright © 2018 boblancer. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int rollDice(){
    return(rand() % 100 + 1);
}

int main(int argc, const char * argv[]) {
    int random, input;
    char ch;
    srand(time(NULL));
    
    random = rollDice();
    
restart: printf("Let's the game begin\n");
    for(int i = 0; i < 7; i++){
        printf("Please guess a number: ");
        scanf("%d", &input);
        if(input == random){
            printf("You won!!\n");
            break;
        }
        else if(input > random){
            printf("Too bad, Too high\n");
        }
        else
            printf("Too bad, Too low\n");
    }
    printf("\nYou lose\n");
    
    printf("Do you want to continue? Y/N ");
    scanf(" %c", &ch);
    
    if( tolower(ch) == 'y')
        goto restart;
    
    
    
}
