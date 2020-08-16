//
//  main.c
//  C lab 5.6
//
//  Created by sasithorn wu on 9/7/18.
//  Copyright © 2018 boblancer. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int counter = 9;
    printf("          10    9    8    7    6    5    4    3    2    1\n");
    printf("----------------------------------------------------------\n");
    for(int i = 10; i > 0; i--){
        printf("%3d|\t", i);
        for(int j = 10; j > counter; j--){
        printf("%4d ", i * j);
            
        }
    printf("\n");
    counter--;
    }
    
}
