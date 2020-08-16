//
//  main.c
//  C lab 6.2
//
//  Created by sasithorn wu on 9/14/18.
//  Copyright © 2018 boblancer. All rights reserved.
//


#include <stdio.h>
/*
void isPrime( int n){
    int i;
    
    if( n >= 2){
        for(i = 2; i < n; i++)
            if( n % i == 0){
                printf("%d is not a prime number!!!\n", n);
        }
        printf("%d is a prime number!!!\n", n);
        return;
    }
    printf("%d is not a prime number!!!\n", n);
}
int main(int argc, const char * argv[]) {
    int inVal;
    
    while (1) {
        scanf("%d", &inVal);
        if (inVal < 0)
            break;
        isPrime(inVal);
    }
}
*/

int isPrime( int n){
    int i;
    
    if( n >= 2){
        for(i = 2; i < n; i++)
            if( n % i == 0){
                return 0;
            }
        return 1;
    }
    return 0;
}

int main(){
    int n, next;
    scanf("%d", &n);
    
    for(int i = 1; i <= n; i++){
        next = 0;
        if (isPrime(i)){
            printf("%d", i);
            for(int j = i;j <= n; j++){
                if (isPrime(i))
                    next = 1;
            }
            if (next == 1)
                printf(", ");
        }
        
    }
    printf("\n");
    
}

