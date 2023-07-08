#ifndef LISTE_H_INCLUDED
#define LISTE_H_INCLUDED

typedef struct x{
    int n;
    struct x * next;
}node;
typedef node *liste;
void initListe(liste *l);
liste newNode();
void setVal(liste l,int k);
void setNext(liste l,liste p);
int val(liste l);
liste next(liste l);
void printListe(liste l);

#endif // LISTE_H_INCLUDED
