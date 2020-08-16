//
//  main.c
//  C lab 4.2
//
//  Created by sasithorn wu on 8/31/18.
//  Copyright © 2018 boblancer. All rights reserved.
//

#include <stdio.h>
/*
int main(int argc, const char * argv[]) {
    float x , y , z;
    
    printf("Enter the value of x: ");
    scanf("%f", &x);
    
    printf("Enter the value of y: ");
    scanf("%f", &y);
    
    printf("Enter the value of z: ");
    scanf("%f", &z);
    
    if(x <= 0)
        printf("Invalid value for x");
    else if(y <= 0)
        printf("Invalid value for y");
    else if(z<= 0)
        printf("Invalid value for z");
    else
        printf("Volume is: %5.2f", x * y * z);
    
    
}
*/
/*
int main(){
    float x, y, z;
    
    printf("Enter the value of x: ");
    scanf("%f", &x);
    
    printf("Enter the value of y: ");
    scanf("%f", &y);
    
    printf("Enter the value of z: ");
    scanf("%f", &z);
    
    if(x > 0 && y > 0 && z > 0)
    printf("volume is: %5.2f", x * y * z);
    else
    printf("Invalid data");

    
*/
/*
int main(){
    int student_code;
    
    scanf("%d", &student_code);
    printf("Student code = %d\n", student_code);
    
    if(student_code == 1)
        printf("The student is freshman.\n");
    else if (student_code == 2)
        printf("The student is sophomore.\n");
    else if (student_code == 3)
        printf("The student is junior.\n");
    else if (student_code == 4)
        printf("The student is senior.\n");
    else
        printf("The student is unclassified.\n");
    
*/
int main(){
    int student_code;
    
    scanf("%d", &student_code);

    printf("Student code = %d\n", student_code);
    
    switch (student_code) {
        case 1:
            printf("The student is freshman.\n");
            break;
        case 2:
            printf("The student is sophomore.\n");
            break;
        case 3:
            printf("The student is junior.\n");
            break;
        case 4:
            printf("The student is senior.\n");
            break;
        default:
        printf("The student is unclassified.\n");
    }
}









