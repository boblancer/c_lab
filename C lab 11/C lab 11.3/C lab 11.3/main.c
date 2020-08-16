//
//  main.c
//  C lab 11.3
//
//  Created by sasithorn wu on 11/2/18.
//  Copyright © 2018 boblancer. All rights reserved.
//

#include <stdio.h>
#include <ctype.h>
#include <string.h>


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

void load(char* filename, struct company* compList){
    FILE *inFile;
    char a[100];
    char* word;
    struct company temp;
    
    
    char name[30];
    char code;
    int noOfEmployees;
    int day;
    int month;
    int year;
    
    int count = 0;
    
    inFile = fopen(filename,"r");
    
    if(inFile == NULL){
        printf("Error: Cannot open the file to read. \n");
        return ;
    }
    
    while(fscanf(inFile, "%s,%c,%d,%d/%d/%d\n", name, &code, &noOfEmployees, &day, &month, &year) != EOF){
        strcpy(temp.name, name);
        temp.code = code;
        temp.noOfEmployees = noOfEmployees;
        temp.foundingDate.day = day;
        temp.foundingDate.month = month;
        temp.foundingDate.year = year;
        
        compList[count++] = temp;
    }
    
    printf("loaded\n");
    fclose(inFile);
    return;
}
void save(char* filename, struct company* compList){
    FILE *inFile;
    inFile = fopen(filename,"w+");
    for(int i = 0; i < 10; i++){
        fprintf(inFile, "%s,%c,%d,%d/%d/%d\n", compList[i].name, compList[i].code
                , compList[i].noOfEmployees, compList[i].foundingDate.day, compList[i].foundingDate.month, compList[i].foundingDate.year);
    }
    
}

void getCompanyInfo(struct company* compList){
    struct company newComp;
    int count = 0;
    char command = '\0';
    char file[10];
    
    
    do{
        printf("loop\n\n");
        do{
            printf("Add, List, Save, Load, or Quit (A/S/L/O/Q)\n");
            scanf(" %c", &command);
            command = toupper(command);
            printf("Current command %c\n", command);
        }while(command != 'A' &&
               command != 'L' &&
               command != 'O' &&
               command != 'S' &&
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
                printf("Enter company type (P/C/L)");
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
        else if(command == 'S'){
            printf("Enter a file name: ");
            scanf("%s", file);
            save(file, compList);
        }
        else if(command == 'O'){
            printf("Enter a file name: ");
            scanf("%s", file);
            load(file, compList);
            
            
        }
        else
            return;
        
        
        
    }while(count < 10);
    
}


int main(){
    struct company list[10];
    getCompanyInfo(list);
}
