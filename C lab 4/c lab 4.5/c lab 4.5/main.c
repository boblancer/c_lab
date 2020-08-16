//
//  main.c
//  c lab 4.5
//
//  Created by sasithorn wu on 8/31/18.
//  Copyright © 2018 boblancer. All rights reserved.
//

#include <stdio.h>
#include <math.h>

int main(int argc, const char * argv[]) {
    float a, b, c, area, s, temp;
    printf("Enter 3 sides of a triangle");
    scanf("%f %f %f", &a, &b, &c);
    
    if( a <= 0 || b <= 0 || c <= 0)
    return 0;
    
    if(a > b && a > c){
        temp = a;
        a = c;
        c = temp;
    }
    if(b > c && b > a){
        temp = b;
        b = c;
        c = temp;
    }
    
    s = (a + b + c) / 2;
    area = sqrt(s * (s - a) * (s - b) * (s - c));
    
    printf("area is %f\n", area);
    
    if (c == sqrt(a * a + b * b))
    printf("This is a right triangle.\n");
    else
    printf("This is not a right triangle.\n");
    
    
}
