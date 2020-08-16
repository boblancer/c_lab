//
//  main.c
//  C lab 2.2
//
//  Created by sasithorn wu on 9/20/18.
//  Copyright © 2018 boblancer. All rights reserved.
//

#include <stdio.h>
void printStar(int n){
    if (n > 0){
        printf("*");
        printStar(n - 1);

    }
}
void reverseOrder(int n){
    printStar(n);
    printf("\n");
    if (n > 0){
        reverseOrder(n-1);
    }
    
    
}

int main(int argc, const char * argv[]) {
    reverseOrder(5);
}


