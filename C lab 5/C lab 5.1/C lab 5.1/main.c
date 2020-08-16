//
//  main.c
//  C lab 5.1
//
//  Created by sasithorn wu on 9/7/18.
//  Copyright © 2018 boblancer. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    int i, x = 0;
    
    for(i = 1; i < 4; i++){
        x+= i;
        printf("i = %d\t", i);
        printf("x = %d\n", x);
    }





}

/*
int main(){
    int counter = 3, x = 0;
    
    while(counter >= 1)
    {
        x += counter;
        printf("counter = %d\t", counter);
        printf("x = %d\n", x);
        counter--;
    }
}
 */
/*
int main(){
    int i, j, x = 0;
    
    for(i = 0; i < 3; i++){
        for(j = 0; j < 2; j++){
            x += (i + j);
            printf("i = %d\t", i);
            printf("j = %d\t", j);
            printf("x = %d\n", x);
            
        }
    }
}
*/
/*
int main(){
    int i = 0, x = 1;
    do
    {
        printf("i = %d\t", i);
        printf("x = %d\n", x);
        x += i;
        i++;
    } while(x < 10);
}
 */

















