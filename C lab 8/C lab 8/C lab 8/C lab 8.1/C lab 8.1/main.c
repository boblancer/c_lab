//
//  main.c
//  C lab 8.1
//
//  Created by sasithorn wu on 10/12/18.
//  Copyright © 2018 boblancer. All rights reserved.
//

#include <stdio.h>

//void swap( float* vallAddr, float* val2Addr){
//    float temp;
//    temp = *vallAddr;
//    *vallAddr = *val2Addr;
//    *val2Addr = temp;
//}
//void displayArray(float num[], int size){
//    int i;
//    for(i = 0; i < size; i++)
//        printf("%5.2f", num[i]);
//    printf("\n");
//
//}
//
//void bubbleSort(float num[], int size){
//    int i,j;
//    for(i = 0; i < size - 1; i++){
//        for(j = 1; j < size; j++)
//            if(num[j] < num[j - 1]){
//                swap(&(num[j]), &(num[j - 1]));
//            }
//
//    }
//}
//void bubbleSort2(float num[], int size){
//    int i,j;
//    for(i = 0; i < size - 1; i++){
//        for(j = 1; j < size; j++)
//            if(num[j] > num[j - 1]){
//                swap(&(num[j]), &(num[j - 1]));
//            }
//    }
//}
//
//void main(){
//    float val[] = {6.21, 4.82, 9.49, 10.66, 1.02, 7.77};
//    int size = sizeof(val)/ sizeof(float);
//    printf("The array of %d floating point elements: \n", size);
//    displayArray(val, size);
//    bubbleSort(val, size);
//    printf("\n\nAfter sorting:\n");
//    displayArray( val, size);
//
//    bubbleSort2(val, size);
//    printf("\n\nAfter sorting:\n");
//    displayArray( val, size);
//}
#define NUMROW 3
#define NUMCOL 4

void addMatrices(float in1[NUMROW][NUMCOL], float
                 in2[NUMROW][NUMCOL], float out[NUMROW][NUMCOL] ){
    int i,j;
    for( i = 0; i < NUMROW; i++)
        for (j = 0; j <NUMCOL; j++) {
            out[i][j] = in1[i][j] + in2[i][j];
        }
}

void showMatrix( float mat[NUMROW][NUMCOL]){
    int i, j;
    for( i = 0; i < NUMROW; i++){
        for (j = 0; j <NUMCOL; j++)
            printf("%3.0f", mat[i][j]);
    printf("\n");
    }
}
void tranpose(float mat[NUMROW][NUMCOL], float tranposeMat[NUMCOL][NUMROW]){
    int i,j;
    for( i = 0; i < NUMROW; i++){
        for (j = 0; j <NUMCOL; j++){
            tranposeMat[j][i] = mat[i][j];
        printf("%3.0f ", mat[i][j]);
        }
        printf("\n");
    }
}
void showTranpose( float mat[NUMCOL][NUMROW]){
    int i, j;
    for( i = 0; i < NUMCOL; i++){
        for (j = 0; j < NUMROW; j++)
            printf("%3.0f", mat[i][j]);
        printf("\n");
    }
}

void main(){
    float A[NUMROW][NUMCOL] = { {1, 2, 0, 1},
                                {0, 2, 1, 2},
        { 1, 0, 1, 1}};
    
    float B[NUMROW][NUMCOL] = { {2, 3, 1, 2},
        {0, 1, 0, 0},
        { 2, 1, 0, 0}};
    float C[NUMROW][NUMCOL];
    
    float D[NUMCOL][NUMROW];
    
    printf("Matrix A:  \n");
    showMatrix(A);
    printf("\n\n");
    printf("Matrix B:  \n");
    showMatrix(B);
    addMatrices(A, B, C);
    printf("Matrix c = A + B:  \n");
    showMatrix(C);
    
    tranpose(A, D);
    
    printf("Matrix D:  \n");
    showMatrix(D);
    printf("Show tranpose\n");
    showTranpose(D);

}
