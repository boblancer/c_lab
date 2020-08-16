//
//  main.c
//  C lab 11.2
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
void printCompanyInfo(struct company comp){
    printf("===============================\n");
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
    
    printf("Founding date %d/%d/%d\n", comp.foundingDate.day, comp.foundingDate.month, comp.foundingDate.year);
    printf("===============================\n");
}
void getCompanyInfo(struct company* compList){
    struct company newComp;
    int count = 0;
    char command = '\0';
    
    
    do{
        //printf("loop\n\n");
        do{
            printf("Add a company, list company, or quit (A/L/Q)\n");
            scanf(" %c", &command);
            command = toupper(command);
            printf("Current command %c\n", command);
        }while(command != 'A' &&
               command != 'L' &&
               command != 'Q');
        if (command == 'A'){
            printf("Enter a company name: ");
            scanf(" %s", newComp.name);
            do{
                printf("Enter company code (P/C/L)" );
                scanf(" %c", &newComp.code);
                newComp.code = toupper(newComp.code);
                
            }while(newComp.code != 'P' &&
                   newComp.code != 'C' &&
                   newComp.code != 'L');
            printf("Enter the number of employees: ");
            scanf("%d", &newComp.noOfEmployees);
            printf("Enter founding date (d/m/y)\n");
            do{
                printf("Enter founding date (d/m/y)\n");
                scanf("%d/%d/%d", &newComp.foundingDate.day, &newComp.foundingDate.month, &newComp.foundingDate.year);
            }while(newComp.foundingDate.day > 31 || newComp.foundingDate.day < 0 ||
                   newComp.foundingDate.month > 12 || newComp.foundingDate.day < 0||
                   newComp.foundingDate.year < 0);
            compList[count++] = newComp;
        }
        else if(command == 'L'){
            do{
                printf("Enter company type (P/C/L)" );
                scanf(" %c", &command);
                command = toupper(command);
            }while(command != 'P' &&
                   command != 'C' &&
                   command != 'L');
            for(int i = 0; i < 10; i++){
                if(compList[i].code == command)
                    printCompanyInfo(compList[i]);
            }
            continue;
        }
        else
            return;
        
        
        
    }while(count < 10);
    
}

int main(int argc, const char * argv[]) {
    struct company comp;
    struct company Listcomp[10];
    getCompanyInfo(Listcomp);
    
}
