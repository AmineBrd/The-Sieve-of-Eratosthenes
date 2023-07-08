#include <stdio.h>
#include <stdlib.h>
#include "liste.h"
#define n 100
// Search a number in a liste
liste Search(liste l,int c)
{
    while(val(next(l)) != c){
        l = next(l);
        if(next(l) == NULL) return NULL;
    }
    return l;
}

int main()
{
    liste l,q,p;
    // Creating Liste Full of Number From 2 To n
    initListe(&l);
    for(int i=2;i<=n;i++){
        p = newNode();
        setVal(p,i);
        setNext(p,NULL);
        if(l == NULL)
            l = p;
        else{
            for(q = l;q->next != NULL;q = next(q)){}
            setNext(q,p);
        }
    }

    // Deleting Non Prime Numbers
    for(p = l;p !=NULL;p = next(p)){
        for(int i = val(p)*val(p);i<=n;i+=val(p)){
            // Search For the number in the list
            q = Search(p,i);
            // Delete Node that is a multiple of i
            if(q != NULL){
                liste temp = next(q);
                setNext(q,next(temp));
                free(temp);
            }
        }
    }
    // Printing Liste Of Prime Numbers
    printListe(l);
    return 0;
}
