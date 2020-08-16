//
//  main.c
//  C lab 5.4
//
//  Created by sasithorn wu on 9/7/18.
//  Copyright © 2018 boblancer. All rights reserved.
//
#include <math.h>
#include <stdio.h>
#define population(t) 6.0 * (pow(M_E, (0.002 * (t))))

int main() {
    
    char *month[12] = {"Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct"
        ,"Nov" ,"Dec"};
    
    printf("Year\tMonth\tPopulation\n");
    printf("----\t-----\t----------\n");
    for(int i = 0; i < 12; i++){
        printf("2007\t%s\t%13.4f\n", month[i], population(7 + (float)i/12));
    }
    
    for(int i = 0; i < 12; i++){
        printf("2008\t%s\t%13.4lf\n", month[i], population(8 + (float)i/12));
    }
    
    printf("\n%f", population(1));
    printf("\n%f\n", population(7 + 1/12));
    
}
    
    
    
    
    
    
    
