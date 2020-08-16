//
//  main.c
//  C lab 6.1
//
//  Created by sasithorn wu on 9/14/18.
//  Copyright © 2018 boblancer. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*
int main(int argc, const char * argv[]) {
    char inChar;
    
    do{
        printf("\nPush any key (type x to stop) ");
        inChar = getchar();
        inChar = tolower( inChar );
        getchar();
        
        if ( isalpha(inChar))
            printf("\nThe character entered is a letter.\n");
        else if ( isdigit(inChar))
            printf("\nThe character entered is a digit.\n");
        else if ( ispunct(inChar))
            printf("\nThe character entered is a punctuation.\n");
        else if ( isspace(inChar))
            printf("\nThe character entered is a whtie space.\n");
    }while( inChar != 'x');
        
        
        
}

*/
/*
int rollDice(){
    return(1 + rand() % 6);
}
int main(){
    int i, randVal, n, c1, c2;
    
    srand( time(NULL));
    c1 = c2 = 0;
    n = 10;
    for( i = 1; i <= 1000000; i++){
        randVal = rollDice();
        switch (randVal) {
            case 1:
                c2++;
                break;
            case 2:
                c2++;
                break;
                
        }if( i ==n ){
            printf("After %d rolls:\n", n);
            printf("\tgetting 1 = %6.2f %%\n", 100.0f * c1 / n);
            printf("\tgetting 2 = %6.2f %%\n", 100.0f * c2 / n);
            n *= 10;
        }
    }
}

*/
int rollDice(){
    return(1 + rand() % 6);
}
int main(){
    int i, randVal, n, c1, c2, c3, c4, c5, c6;
    
    srand( time(NULL));
    c1 = c2 = 0;
    n = 10;
    for( i = 1; i <= 1000000; i++){
        randVal = rollDice();
        switch (randVal) {
            case 1:
                c1++;
                break;
            case 2:
                c2++;
                break;
            case 3:
                c3++;
                break;
            case 4:
                c4++;
                break;
            case 5:
                c5++;
                break;
            case 6:
                c6++;
                break;
                
        }if( i ==n ){
            printf("After %d rolls:\n", n);
            printf("\tgetting 1 = %6.2f %%\n", 100.0f * c1 / n);
            printf("\tgetting 2 = %6.2f %%\n", 100.0f * c2 / n);
            printf("\tgetting 3 = %6.2f %%\n", 100.0f * c3 / n);
            printf("\tgetting 4 = %6.2f %%\n", 100.0f * c4 / n);
            printf("\tgetting 5 = %6.2f %%\n", 100.0f * c5 / n);
            printf("\tgetting 6 = %6.2f %%\n", 100.0f * c6 / n);
            n *= 10;
        }
    }
     
}






