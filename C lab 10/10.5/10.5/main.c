//
//  main.c
//  10.5
//
//  Created by sasithorn wu on 11/8/18.
//  Copyright © 2018 boblancer. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define SIZE 17
int scan(char* filename){
    FILE *inFile;
    bool virus = false;
    unsigned char a;
    unsigned char data[SIZE] = { 10, 19, 111, 41, 53, 24, 112, 0, 3, 53, 66, 115, 156, 173, 250, 108, 173 };
    unsigned char stack[SIZE] = {};
    inFile = fopen(filename,"r");
    
    
    if(inFile == NULL){
        printf("Error: Cannot open the file to read. \n");
        return 0;
    }
    
    for(int i = 0; i < SIZE; i++){
        
    }
    if(memcmp(data, stack, SIZE) == 0){
        for(int i = 0; i < SIZE; i++){
            printf("%02X ", stack[i]);
        }
        printf("infected");
        return 0;
    }
    
    while(fscanf(inFile, "%c", &a) != EOF){
        /*
         for(int i = 0; i < SIZE; i++){
         printf("%02X ", stack[i]);
         }
         
         printf("\n");
         */
        for(int i = 0; i < SIZE; i++){
            if(i < 16){
                //printf("replace %02X with %02X at %d\n", stack[i] , stack[i + 1], i);
                stack[i] = stack[i + 1];
            }
            else{
                //printf("replace %02X with %02X at %d\n", stack[i] , a, i);
                stack[i] = a;
            }
        }
        if(memcmp(data, stack, SIZE) == 0){
            for(int i = 0; i < SIZE; i++){
                printf("%02X ", stack[i]);
            }
            printf("infected\n");
            return 0;
        }
    }
    
    
    
    
    fclose(inFile);
    
    printf("Clean");
    return 0;
}

int main()
{
    scan("p3.dll");
    return 0;
}
