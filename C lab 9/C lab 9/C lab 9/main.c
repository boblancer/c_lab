//
//  main.c
//  C lab 9
//
//  Created by sasithorn wu on 10/19/18.
//  Copyright © 2018 boblancer. All rights reserved.
//

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
//#define NUMSTR 7
//#define MAXLEN 30
//void searchString(char list [NUMSTR][MAXLEN], char query []){
//    int i;
//    char message [MAXLEN];
//    strcpy (message, query);
//    for (i=0;i<NUMSTR;i++)
//        if (strcmp(list[i], query)==0){
//            strcat(message, " is in the list.");
//            puts( message);
//            return;
//        }
//    strcat(message, " is NOT in the list.");
//    puts(message);
//}

//void searchString(char list [NUMSTR][MAXLEN], char query []){
//    int i, counter = 0;
//    char message [MAXLEN];
//    strcpy (message, query);
//    for (i=0;i< NUMSTR ;i++)
//        if (strcmp(list[i], query)==0){
//            counter++;
//        }
//    if (counter > 0){
//        strcat(message, " is in the list");
//        printf("%s %d time\n", message, counter);
//    }else{
//    strcat(message, " is NOT in the list.");
//    puts(message);
//    }
//    return ;
//}
//
//int main(){
//
//    char nameList [NUMSTR] [MAXLEN] = {"Joe","Jane","Joe","John","Jim","Joe","Jim"};
//    puts("\n----------Seaching---------");
//    searchString(nameList, "Joe");
//    searchString(nameList, "Jack");
//    searchString(nameList, "Jim");
//}

//int main(){
//    char str[] = "- Hi, how are you?    - I'm fine. Thank you";
//    char *token;
//    printf("Splitting string \"n%s\" into tokens:\n", str);
//    token = strtok(str, " ,.-");
//
//    while (token != NULL) {
//        puts(token);
//        token = strtok(NULL, "- ,?.");
//    }
//    return 0;
//
//}
//#define MAXLEN 100
//#define MAXWORD = 10
//
//void splitString(char intSTR[MAXLEN], char wordList[MAXLEN][MAXLEN]){
//    int i = 0, j = 0, exist;
//    char *token;
//    token = strtok(intSTR, " ");
//    while (token != NULL) {
//        exist = 0;
//        for(;j < 10; j++){
//            if( strcmp(token, wordList[j]) == 0)
//                exist = 1;
//        }
//        if(exist == 0){
//            strcpy(wordList[i], token);
//            i++;
//        }
//        token = strtok(NULL, " ");
//    }
//    while( i < 10){
//        wordList[i][0] = '\0';
//        i++;
//    }
//
//}
//int main(){
//    int i;
//    char string[] = "Bonko the cat";
//    char list[MAXLEN][MAXLEN];
//    splitString(string, list);
//    for(i = 0; i < 10; i++){
//        printf("%s\n", list[i]);
//    }
//}

//int count(char string[]){
//    int count = 0;
//    char *token;
//    token = strtok(string, " ");
//    while (token != NULL) {
////        printf("%c\n", token[0]);
//        if (token[0] == 'a' || token[0] == 'a')
//            count++;
//        else if (token[0] == 'i' || token[0] == 'I')
//            count++;
//        else if (token[0] == 'e' || token[0] == 'E')
//            count++;
//        else if (token[0] == 'o' || token[0] == 'O')
//            count++;
//        else if (token[0] == 'u' || token[0] == 'U')
//            count++;
//        token = strtok(NULL, " ");
//    }
//    return count;
//
//}
//int main(){
//    char str1[] = " This is a test input";
//    char str2[] = "Hello, world!";
//    printf("%d\n", count(str1));
//    printf("%d\n", count(str2));
//
//    return 0;
//}

void sumNum(char string[]){
    int i, sum= 0, j = 0, k;
    char stack[10] = "";
    for(i = 0; i <= sizeof(string);i++){
        printf("%d\n", i);
        if(isdigit(string[i])){
            printf("%c is digit\n", string[i]);
            stack[j] = string[i];
            j++;
        }
        if( (isdigit(string[i + 1]) == 0)  && j >= 1){
            printf("flush %s ,j = %d\n", stack, j);
            sum += atoi(stack);
            memset(stack, '\0', 10);
            j = 0;

        }
    }
    printf("Sum is %d", sum);
}
int main(){
    char jack[] = "fkdsjfldslkjsklfklsdfldfsdd100fsjfhjksdfsdhjksd100fndsjkfksnfjnfkjs100";
    sumNum(jack);
}









