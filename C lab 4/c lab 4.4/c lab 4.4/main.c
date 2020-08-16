//
//  main.c
//  c lab 4.4
//
//  Created by sasithorn wu on 8/31/18.
//  Copyright © 2018 boblancer. All rights reserved.
//

#include <stdio.h>
#include <math.h>
int main(int argc, const char * argv[]) {
    double x1, x2;
    float a, b, c;
    
    printf("Enter 3 numbers: ");
    scanf("%f %f %f", &a, &b, &c);
    x1 = (-b + sqrt(b * b - 4 * a * c))/ 2 * a;
    x2 = (-b - sqrt(b * b - 4 * a * c))/ 2 * a;
    
    if (a == 0)
    printf("Invalid a is 0");
    else if(b * b - 4 * a * c < 0)
    printf("b * b - 4 * a * c < 0");
    else
    printf("x1 = %.1f x2 = %.1f\n", x1, x2);
    
    return 0;
}
