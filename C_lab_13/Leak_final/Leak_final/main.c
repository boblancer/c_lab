//
//  main.c
//  Leak_final
//
//  Created by sasithorn wu on 11/16/18.
//  Copyright © 2018 boblancer. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

struct Card {
    char rank;
    char suit;
    struct Card *next;
};

void displayCards(struct Card *cardPtr) {
    while(cardPtr!=NULL) {
        printf("%c%c ", cardPtr->rank, cardPtr->suit);
        cardPtr = cardPtr->next;
    }
    printf("\n");
}

void free_list(struct Card *cardPtr) {
    struct Card *temp = cardPtr;
    struct Card *temp2 = cardPtr;
    
    while(temp != NULL){
        temp2 = temp;
        temp = temp->next;
        printf("freeing card %c%c\n", temp2->rank, temp2->suit);
        free(temp2);
    }
}

int main() {
    struct Card *firstPtr, *tempPtr;
    
    printf("Adding card 2H\n");
    tempPtr = (struct Card*)malloc(1*sizeof(struct Card));
    tempPtr->rank = '2';
    tempPtr->suit = 'H';
    tempPtr->next = NULL;
    firstPtr = tempPtr;
    
    printf("Adding card 3D\n");
    tempPtr = (struct Card*)malloc(1*sizeof(struct Card));
    tempPtr->rank = '3';
    tempPtr->suit = 'D';
    tempPtr->next = firstPtr;
    firstPtr = tempPtr;
    
    printf("Adding card 4C\n");
    tempPtr = (struct Card*)malloc(1*sizeof(struct Card));
    tempPtr->rank = '4';
    tempPtr->suit = 'C';
    tempPtr->next = firstPtr;
    firstPtr = tempPtr;
    
    printf("Adding card 5S\n");
    tempPtr = (struct Card*)malloc(1*sizeof(struct Card));
    tempPtr->rank = '5';
    tempPtr->suit = 'S';
    tempPtr->next = firstPtr;
    firstPtr = tempPtr;
    
    displayCards(firstPtr);
    
    free_list(firstPtr);
    
    
    getchar();
}

