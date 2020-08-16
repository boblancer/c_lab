//
//  main.c
//  C lab 5.5
//
//  Created by sasithorn wu on 9/7/18.
//  Copyright © 2018 boblancer. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int n;
    printf("Enter an integer ");
    scanf("%d", &n);
    
    for(int i = 1; i < n; i++)
        for(int j = i; j < n + 1; j++)
        printf("%d %d\n", i, j);
    
    
}
