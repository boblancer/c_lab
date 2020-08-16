//
//  main.c
//  C lab 6.5
//
//  Created by sasithorn wu on 9/14/18.
//  Copyright © 2018 boblancer. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int rollDice(){
    return(rand() % 26) + 97;
}

int main(int argc, const char * argv[]) {
    int buffer1, buffer2, wordCount;
    srand(time(NULL));
    
    buffer1 = rollDice();
    wordCount = 1;
    while(1){
        buffer2 = rollDice();
        wordCount++;
        printf("%c%c\n", buffer1, buffer2);
        if (buffer1 == 'a' && buffer2 =='t'){
            printf("Monkey typed the word at\n");
            printf("\ncount = %d", wordCount);
            return 0;
        }
        else if (buffer1 == 'i' && buffer2 =='s'){
            printf("Monkey typed the word is\n");
            printf("\ncount = %d", wordCount);
            return 0;
        }
        else if (buffer1 == 'h' && buffer2 =='e'){
            printf("Monkey typed the word he\n");
            printf("\ncount = %d", wordCount);
            return 0;
        }
        else if (buffer1 == 'w' && buffer2 =='e'){
            printf("Monkey typed the word we\n");
            printf("\ncount = %d", wordCount);
            return 0;
        }
        else if (buffer1 == 'u' && buffer2 =='p'){
            printf("Monkey typed the word up\n");
            printf("\ncount = %d", wordCount);
            return 0;
        }
        else if (buffer1 == 'o' && buffer2 =='n'){
            printf("Monkey typed the word on\n");
            printf("\ncount = %d", wordCount);
            return 0;
        }
        wordCount+=1;
        buffer1 = buffer2;
        
        
    }
    return 0;
    
    
    
    
}
