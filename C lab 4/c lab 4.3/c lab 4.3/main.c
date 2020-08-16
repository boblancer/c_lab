//
//  main.c
//  c lab 4.3
//
//  Created by sasithorn wu on 8/31/18.
//  Copyright © 2018 boblancer. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    double income, tax;
    printf("Enter income value: ");
    scanf("%lf", &income);
    
    if (income < 150000)
        tax = 0;
    else if (income <= 500000)
        tax = (income - 150000) * 0.10;
    else if  (income <= 1000000)
        tax = (income - 500000) * 0.20 + 35000;
    else if (income <= 400000)
        tax = (income - 1000000) * 0.30 + 135000;
    else
    tax = (income - 4000000) * 0.37 + 1035000;
    
    printf("%.2f", tax);
    return 0;
}

