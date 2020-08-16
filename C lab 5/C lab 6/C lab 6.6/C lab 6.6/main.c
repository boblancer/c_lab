//
//  main.c
//  C lab 6.6
//
//  Created by sasithorn wu on 9/14/18.
//  Copyright © 2018 boblancer. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int rollRank(){
    return(rand() % 13 + 1);
}
char rollSuit(){
    int temp = (rand() % 4 + 1);
    if(temp == 1)
        return 'C';
    else if(temp == 2)
        return 'D';
    else if(temp == 3)
        return 'H';
    else if(temp == 4)
        return 'S';
    
    return 0;

}



int main(int argc, const char * argv[]) {
    srand(time(NULL));
    int rank1, rank2, rank3, suit1, suit2, suit3 = 0, inhand, sum = 0;
    char response;
    char array[14] = {[10] = 'J', [11] = 'Q', [12] = 'K', [1] = 'A'};
    
    printf("Deal 2 card Y/N ");
    scanf("%c", &response);
    if ((char)response == 'Y')
        printf("\n");
    else
        return 0;
restart:
    inhand = 2;
    printf("your cards are\n");
    rank1 = rollRank();
    suit1 = rollSuit();
redraw:
    rank2 = rollRank();
    suit2 = rollSuit();
    if (rank2 == rank1 && suit2 == suit1)
        goto redraw;
    /*
    if (rank1 == 10)
        printf("J%c and %d%c\n", suit1, rank2, suit2);
    if (rank1 == 1 || rank1 == 10 || rank1 == 11 || rank1 == 12 || rank1 == 13)
        printf("%d%c and %d%c\n", array[rank1], suit1, rank2, suit2);
    else if (rank2 == 1 || rank2 == 10 || rank2 == 11 || rank2 == 12 || rank2 == 13)
        printf("%d%c and %d%c\n", rank1, suit1, array[rank2], suit2);
    
    else if ((rank1 == 1 || rank1 == 10 || rank1 == 11 || rank1 == 12 || rank1 == 13) && (rank2 == 1 || rank2 == 10 || rank2 == 11 || rank2 == 12 || rank2 == 13))
        printf("%d%c and %d%c\n", array[rank1], suit1, array[rank2], suit2);
    else
     */
    printf("%d%c and %d%c\n", rank1, suit1, rank2, suit2);
    printf("Draw a card Y/N ");
    scanf(" %c", &response);
    if(response == 'Y'){
    redraw2:
        rank3 = rollRank();
        suit3 = rollSuit();
        if (rank2 == rank1 && suit2 == suit1)
            goto redraw2;
        printf("%d%c and %d%c and %d%c\n\n", rank1, suit1, rank2, suit2, rank3, suit3);
        inhand = 3;
        
    }
    if (rank1 >= 10)
        rank1 = 0;
    if (rank2 >= 10)
        rank2 = 0;
    if (rank3 >= 10)
        rank3 = 0;
    
    if(inhand == 2){
        sum = rank1 + rank2;
    }
    else if (inhand == 3){
        sum = rank1 + rank2 + rank3;
    }
    
    printf("The total value of your card is %d\n", sum);
    printf("Hand value = %d", inhand);
    printf("\nPlay again Y/N ");
    scanf(" %c", &response);
    if(response == 'Y')
        goto restart;
        
    return 0;
}



