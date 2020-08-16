//
//  main.c
//  C lab 8.3
//
//  Created by sasithorn wu on 10/12/18.
//  Copyright © 2018 boblancer. All rights reserved.
//

#include <stdio.h>
//void MaxMin(double *array, int size, int *posMax, int*posMin){
//    int i;
//    double largest, smallest;
//    largest = array[0];
//    smallest = array[0];
//    for(i = 0; i < size; i++){
//        if(array[i] > largest){
//            *posMax = i;
//            largest = array[i];
////            printf("max %f %f", array[i],largest);
////            printf(" i = %d\n", i);
//        }
//        if(array[i] < smallest){
//            *posMin = i;
//            smallest = array[i];
////            printf("min %f %f", array[i],smallest);
////            printf(" i = %d\n", i);
//        }
//
//    }
//}
//int main(int argc, const char * argv[]) {
//    int max, min;
//    double array[3] = {0, 0, -1};
//    MaxMin(array, sizeof(array)/sizeof(double), &max, &min);
//    printf("max %d , min %d\n", max, min);
//}

int main(){
    char ch;
    int a= 0, e=0, i=0, o=0, u=0;
    printf("Enter a string: ");
    do{
        ch = getchar();
        if (ch == 'a' || ch == 'A')
            a++;
        else if (ch == 'e' || ch == 'E')
            e++;
        else if (ch == 'i' || ch == 'I')
            i++;
        else if (ch == 'o' || ch == 'O')
            o++;
        else if (ch == 'u' || ch == 'U')
            u++;
    }
    while(ch != EOF);

    printf("\na: %d\n", a);
    printf("e: %d\n", e);
    printf("i: %d\n", i);
    printf("o: %d\n", o);
    printf("u: %d\n", u);


    return 0;
}
