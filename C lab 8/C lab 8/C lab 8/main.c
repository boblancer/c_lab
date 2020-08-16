//
//  main.c
//  C lab 8
//
//  Created by sasithorn wu on 10/12/18.
//  Copyright © 2018 boblancer. All rights reserved.
//

#include <stdio.h>
#include <math.h>
int main(int argc, const char * argv[]) {
    int array[20] = {0};
    float avg = 0, sd = 0, AVG = 0, SD = 0, counter = 20;
    printf("foo");
    for(int i = 0; i < 20; i++){
        scanf("%d", array + i);
    }

    for(int i = 0; i < 20; i++){
        avg += array[i];
    }
    avg = avg/20;

    for(int i = 0; i < 20; i++){
        sd += pow(array[i] - avg, 2);
    }
    sd = sqrt(sd/20);

    for(int i = 0; i < 20; i++){
        if( fabs(array[i] - avg) > sd * 4){
            counter--;
            array[i] = '\0';
        }

    }
    for(int i = 0; i < 20; i++){
        if(array[i] != '\0'){
            AVG += array[i];
        }
    }
    AVG = AVG/counter;

    for(int i = 0; i < 20; i++){
        if(array[i] != 0){
            printf("%d\n", array[i]);
            SD += pow(array[i] - AVG, 2);
        }
    }
    SD = sqrt(SD/counter);


    printf("Average = %f\n", avg);
    printf("SD = %f\n", sd);

    printf("\nAfter removing outliers\n");
    printf("Average = %f\n", AVG);
    printf("SD = %f\n", SD);


}


