//
//  main.c
//  C lab 7.1
//
//  Created by sasithorn wu on 9/21/18.
//  Copyright © 2018 boblancer. All rights reserved.
//

#include <stdio.h>

//int factorial( int n){
//    if( n == 0)
//        return 1;
//    return n * factorial(n - 1);
//
//}
//int main(int argc, const char * argv[]) {
//    int n;
//    for(n = 0; n <= 10; n++){
//        printf("%2d! = %d\n",n,  factorial( n ));
//    }
//    return 0;
//}

//int fib(int n){
//    if (n < 2)
//        return n;
//
//    return fib(n - 1) + fib(n - 2);
//
//}
//
//int main(){
//    printf("%d", fib(12));
//
//}

//void drawline(int n){
//    if (n > 0){
//        printf("*");
//        drawline(n - 1);
//    }
//
//}
//void drawTri(int n){
//    if (n > 0)
//        drawTri(n - 1);
//    drawline(n);
//    printf("\n");
//
//
//}
//int main(){
//    drawTri(10);
//
//    return 0;
//}

//void factor(int n){
//    int i = 2;
//    if (n == 1){
//        return;
//    }
//    if(n <= 2){
//        printf("%d", n);
//        return;
//    }
//
//    while(i < n){
//        if (n % i == 0)
//            break;
//        i++;
//    }
//    printf("%d ", i);
//    factor(n/i);
//
//}
//int main(){
//    factor(240);
//}

//int gcd(int a, int b){
//    if(a % b == 0){
//        return b;
//    }
//    return gcd(b, a%b);
//
//}
//int main(){
//    printf("%d\n", gcd(76, 32));
//}

#include <math.h>
int digit(long n){
    int count = 0;

    while(n > 0){
        n /= 10;
        count++;
    }
    return count;
}

void palindrome(long n){
    int fulldigit, firstdigit, lastdigit;
    if(digit(n) == 1){
        printf("palindrome\n");
        return;
    }
    fulldigit = digit(n);
    printf("full digit %d\n", fulldigit);
    firstdigit = n / (pow(10, fulldigit - 1));
    lastdigit = n % 10;
    printf("%d %d\n", firstdigit, lastdigit);
    printf("%ld \n", (n - (n - (n % (long)pow(10,fulldigit - 1)))) / 10);
    
    if(digit(n) == 2 && firstdigit == lastdigit){
        printf("palindrome\n");
        return;
    }
    if(firstdigit == lastdigit){
        palindrome((n - (n - (n % (long)pow(10,fulldigit - 1)))) / 10);
    }
    else{
        printf("not a palindrome\n");
    }
}
int main(){

    palindrome(12345678654321);
}













