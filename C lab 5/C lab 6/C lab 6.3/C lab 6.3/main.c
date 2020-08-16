//
//  main.c
//  C lab 6.3
//
//  Created by sasithorn wu on 9/14/18.
//  Copyright © 2018 boblancer. All rights reserved.
//

#include <stdio.h>
int gcd(int a, int b){

    if (a%b == 0)
        printf("%d\n", b);

    gcd(b, a%b);

    return 0;
}
int main() {
    
    gcd(84,49);
    
}
