//
//  main.c
//  C lab 5.3
//
//  Created by sasithorn wu on 9/7/18.
//  Copyright © 2018 boblancer. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int n;
    printf("enter an integer ");
    scanf("%d", &n);
    
    for(int i = 1; 1 < n + 1; n--){
        for(int j = 1; j <= i; j++)
            printf("*");
        printf("\n");
        i++;
        
    }
    
}
