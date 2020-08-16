//
//  main.c
//  c lab 4.6
//
//  Created by sasithorn wu on 8/31/18.
//  Copyright © 2018 boblancer. All rights reserved.
//


#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    float x, y, slopex, slopey;
    printf("Enter two point\n");
    scanf("%f %f", &x, &y);
    slopey = -0.5 * x + 100;
    slopex = (100 - y) * 2;
    
    if (x < 0 || y < 0)
    printf("Outisde\n");
    else if(x > slopex || y > slopey)
    printf("Outside\n");
    else
    printf("Inside\n");
    
    
    
    
    

}
