//
//  main.c
//  C lab 11.1
//
//  Created by sasithorn wu on 11/2/18.
//  Copyright © 2018 boblancer. All rights reserved.
//

#include <stdio.h>
#include <ctype.h>

struct Date{
    int day;
    int month;
    int year;
};
struct company{
    char name[30];
    char code;
    int noOfEmployees;
    struct Date foundingDate;
};

struct company getCompanyInfo(){
    struct company newComp;
    
    printf("Enter a company name: ");
    gets(newComp.name);
    do{
        printf("Enter company code (P/C/L)" );
        newComp.code = toupper(getchar());
        while(getchar() != '\n');
    }while(newComp.code != 'P' &&
           newComp.code != 'C' &&
           newComp.code != 'L');
    printf("Enter the number of employees: ");
    scanf("%d", &newComp.noOfEmployees);
    
    do{
        printf("Enter founding date (d/m/y)\n");
        scanf("%d/%d/%d", &newComp.foundingDate.day, &newComp.foundingDate.month, &newComp.foundingDate.year);
    }while(newComp.foundingDate.day > 31 || newComp.foundingDate.day < 0 ||
           newComp.foundingDate.month > 12 || newComp.foundingDate.day < 0 ||
           newComp.foundingDate.year < 0);
    return newComp;
}
void printCompanyInfo(struct company comp){
    printf("Company name: %s\n", comp.name);
    printf("Type of company: ");
    switch (comp.code) {
        case 'P':
            printf("Public company\n");
            break;
        case 'C':
            printf("Limited company\n");
            break;
        case 'L':
            printf("Limited partnership\n");
            break;
        default:
            printf("unknown");
            break;
    }
    printf("Number of employees: %d\n", comp.noOfEmployees);
    
    printf("Founding date %d/%d/%d", comp.foundingDate.day, comp.foundingDate.month, comp.foundingDate.year);
}
int main(int argc, const char * argv[]) {
    struct company comp;
    comp = getCompanyInfo();
    printCompanyInfo(comp);
}
