//
//  main.c
//  c_lab_13.1
//
//  Created by sasithorn wu on 11/16/18.
//  Copyright © 2018 boblancer. All rights reserved.
//



#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define OPTION_WHITE (1<<0)
#define OPTION_LARGE (1<<1)
#define OPTION_LTE (1<<2)
#define OPTION_ONLINE (1<<3)

struct OrderStruct {
    int order_id;
    int customer_id;
    unsigned char option;
    struct OrderStruct *next;
};

typedef struct OrderStruct Order;

Order *queueIn, *queueOut;
int next_order_id = 1;

char readChar() {
    char ans;
    do {
        ans = getchar();
    } while( ans=='\n' || ans=='\t' || ans==' ');
    while(getchar()!='\n');
    return ans;
}

void enqueue(Order *newOrder) {
    newOrder->next = NULL;
    if(queueIn!=NULL) {
        queueIn->next = newOrder;
        queueIn = newOrder;
    } else {
        queueIn = newOrder;
        queueOut = newOrder;
    }
}

void addOrder() {
    Order *newOrder = (Order*)malloc(sizeof(Order));
    unsigned int orderOpt;
    
    newOrder->order_id = next_order_id;
    next_order_id = (next_order_id<9999999?next_order_id+1:0);
    printf("Order ID: %07d\n", newOrder->order_id);
    
    printf("Enter customer ID: ");
    scanf("%d", &newOrder->customer_id);
    
    orderOpt=0;
    printf("Color: 1)Black  2)White [1/2]? ");
    if(readChar()=='2') orderOpt = orderOpt|OPTION_WHITE;
    printf("Capacity: 1)Small-512GB  2)Large-1TB [1/2]? ");
    if(readChar()=='2') orderOpt = orderOpt|OPTION_LARGE;
    printf("Band: 1)3G  2)LTE [1/2]? ");
    if(readChar()=='2') orderOpt |= OPTION_LTE;
    printf("Ordered from: 1)In-store  2)Online [1/2]? ");
    if(readChar()=='2') orderOpt |= OPTION_ONLINE;
    newOrder->option = orderOpt;
    
    enqueue(newOrder);
}

void listAllOrders() {
    Order *temp = queueOut;
    for(;temp != NULL ; temp = temp->next){
        printf("\n=====================================\n");
        printf("Order ID: %07d\n", temp->order_id);
        printf("Customer ID: %07d\n", temp->customer_id);
        if ( (temp->option& (1<<0)) != temp->option)
            printf("White ");
        else
            printf("Black ");
        
        
        if ( (temp->option& (1<<1)) == temp->option)
            printf("512GB ");
        else
            printf("1TB ");
        
        if ( (temp->option& (1<<2)) == temp->option)
            printf("3G ");
        else
            printf("LTE ");
        
        if ( (temp->option& (1<<3)) == temp->option)
            printf("In-Store ");
        else
            printf("Online ");
        printf("\n=====================================\n");
        printf("");
    }
}
void free_list() {
    Order *temp = queueOut;
    Order *temp2 = queueOut;
    
    while(temp != NULL){
        temp2 = temp;
        temp = temp->next;
        printf("freeing order %d", temp2->customer_id);
        free(temp2);
    }
}
void serve(){
    Order *temp = queueOut;
    printf("\n=====================================\n");
    printf("The following order has been taken out\n");
    printf("Order ID: %07d\n", temp->order_id);
    printf("Customer ID: %07d\n", temp->customer_id);
    if ( (temp->option& (1<<0)) != temp->option)
        printf("White ");
    else
        printf("Black ");
    
    
    if ( (temp->option& (1<<1)) == temp->option)
        printf("512GB ");
    else
        printf("1TB ");
    
    if ( (temp->option& (1<<2)) == temp->option)
        printf("3G ");
    else
        printf("LTE ");
    
    if ( (temp->option& (1<<3)) == temp->option)
        printf("In-Store ");
    else
        printf("Online ");
    printf("\n=====================================\n");
    printf("\n");
    queueOut = queueOut->next;
    free(temp);
}

int main() {
    char ans, quit;
    
    queueIn = queueOut = NULL;
    quit=0;
    while(!quit) {
        printf("Add new order, List all orders, or Quit [A/S/L/Q]? ");
        ans = toupper(readChar());
        switch (ans) {
            case 'A':
                addOrder();
                break;
            case 'L':
                listAllOrders();
                break;
            case 'S':
                serve();
                break;
            case 'Q':
                quit = 1;
                break;
        }
    }
    getchar();
    free_list();
    
}
