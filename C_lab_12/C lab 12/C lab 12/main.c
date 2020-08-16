//
//  main.c
//  C lab 12
//
//  Created by sasithorn wu on 11/9/18.
//  Copyright © 2018 boblancer. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
struct Node{
    char rank;
    char suit;
    struct Node *next;
};
void displayCards(struct Node *cardPtr){
    printf("=========Card List=========\n");
    while(cardPtr != NULL){
        printf("%c%c ", cardPtr->rank, cardPtr->suit);
        cardPtr = cardPtr->next;
    }
    printf("\n");
}
void push(struct Node** head, char rank, char suit){
    printf("Pushing %c%c onto stack\n", rank , suit);
    struct Node* new_node =(struct Node*) malloc(sizeof(struct Node));
    struct Node* current = *head;
    new_node->rank = rank;
    new_node->suit = suit;
    new_node->next = NULL;
   
//printf("new node rank %c suit %c\n", new_node->rank, new_node->suit);
    
    if (*head == NULL){
        *head = new_node;
//printf("Head rank %c suit %c\n", (*head)->rank, (*head)->suit);
        return;
    }
    
    while(current != NULL){
        if (current->next == NULL){
            current->next = new_node;
            return;
            
        }
        current = current->next;
    }
}
int search(struct Node* head, char rank, char suit){
    struct Node* current = head;
    while(current != NULL){
        if(current->rank == rank && current->suit == suit){
            return 1;
        }
        current = current->next;
    }
    return 0;
}
void removeNode(struct Node** head, char rank, char suit){
    struct Node* current = *head;
    if(current->rank == rank && current->suit == suit){
        *head = current->next;
        return;
    }
    while(current->next != NULL){
        if((current->next)->rank == rank && (current->next)->suit == suit){
            printf("removing %c%c", rank, suit);
            if((current->next)->next == NULL)
                current->next = NULL;
            else{
                current->next = (current->next)->next;
            }
            return;
            
        }
        current = current->next;
    }
}
void loop(){
    char valid[15] = {'1', '2' , '3' ,'4','5','6','7','8','9','X','J','Q','K', 'A'};
    char valid2[4] = {'D', 'C', 'S', 'H'};
    char command = '0';
    struct Node* head = NULL;
    char rank, suit;
    int Rvalidity = 0, Svalidity = 0;
    
    for(;;){
        command = '0';
        (void)(Rvalidity = 0), Svalidity = 0;
        while(command != 'A' && command != 'Q'&& command != 'R'){
            printf("Add a card, Remove a card, or Quit (A/R/Q): ");
            scanf(" %c", &command);
        }
        if(command == 'A'){
            printf("Enter new card: ");
            scanf(" %c%c", &rank, &suit);
            for(int i= 0; i < 16; i++){
                if(rank == valid[i])
                    Rvalidity = 1;
            }
            for(int i= 0; i < 4; i++){
                if(suit == valid2[i])
                    Svalidity = 1;
            }
            printf("Validity %d %d\n", Rvalidity, Svalidity);
            if(Rvalidity == 0 || Svalidity == 0){
                printf("invalid input\n");
                continue;
            }
                
            if(search(head, rank, suit)){
                printf("Card already exsist\n");
            }else
                push(&head, rank, suit);
            displayCards(head);
        }else if(command == 'Q'){
            return;
        }else if(command == 'R'){
            printf("Enter card to remove: ");
            scanf(" %c%c", &rank, &suit);
            if(search(head, rank, suit)){
                removeNode(&head, rank, suit);
            }else
                printf("Card don't exsist\n");
            displayCards(head);
            
        }
    
    }
}
int main(int argc, const char * argv[]) {
    loop();
    return 0;
}
