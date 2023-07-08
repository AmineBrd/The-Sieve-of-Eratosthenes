#include "liste.h"
#include <stdlib.h>

void initListe(liste *l){
    *l = NULL;
}

liste newNode(){
    return (liste)malloc(sizeof(node));
}

void setVal(liste l,int k){
    l->n = k;
}

void setNext(liste l,liste p){
    l->next = p;
}

int val(liste l){
    return l->n;
}

liste next(liste l){
    return l->next;
}

void printListe(liste l){
    while(l != NULL){
        printf("%d\n ",val(l));
        l = next(l);
    }
}


