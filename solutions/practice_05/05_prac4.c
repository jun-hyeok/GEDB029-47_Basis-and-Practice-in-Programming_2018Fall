#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define N 10

void swap(int deck[], int first, int second){
    int temp = deck[first];
    deck[first] = deck[second];
    deck[second] = temp;
}

void initialDeck(int deck[]){
    int i;
    for(i=0;i<N;i++){
        deck[i]=i;
    }
}

void printDeck(int deck[]){
    int i;
    for(i=0;i<N;i++){
        printf(" %d", deck[i]);
    }
    printf("\n\n");
}

void shuffleDeck(int deck[]){
    int first, second;
    int n = 0;
    while(++n < 100){
        first = rand() % N;
        second = rand() % N;
        swap(deck, first, second);
    }
}

void randomDeckPick(int deck[], int deck_state[]){
    int i, pick;
    for(i=0;i<N;i++){
        printf("turn %d :", i+1);
        while(1){
            pick = rand() % N;
            if (deck_state[pick] == 0){
                deck_state[pick] = 1;
                printDeckState(deck, deck_state);
                break;
            }
        }
    }
}

void printDeckState(int deck[], int deck_state[]){
    int i;
    for(i=0;i<N;i++){
        if (deck_state[i] == 0)
            printf("\t¡á");
        else
            printf("\t%d", deck[i]);
    }
    printf("\n\n");
}

void main(void){
    int deck[N];
    int deck_state[N] = {0};
    srand((unsigned int)time(0));

    printf("Initial Deck :");
    initialDeck(deck);
    printDeck(deck);

    printf("Shuffled Deck :");
    shuffleDeck(deck);
    printDeck(deck);

    randomDeckPick(deck, deck_state);
}
