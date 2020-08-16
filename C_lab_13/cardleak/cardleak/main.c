//
//  main.c
//  cardleak
//
//  Created by sasithorn wu on 11/16/18.
//  Copyright © 2018 boblancer. All rights reserved.
//

#include <stdlib.h>
#include <stdio.h>
#include "leak_detector.h"

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
    
    free(firstPtr);
    
    getchar();
    return 0;
}
