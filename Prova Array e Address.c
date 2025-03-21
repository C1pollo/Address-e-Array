#include <stdio.h>
#include <stdlib.h>

int main (void)
{

    int c[10]={0,1,2,3,4,5,6,7,8,9},b,a;
    int *pa;
    pa = &a;// L’operazione &a restituisce l’indirizzo a cui è allocata la variabile a!

    // non vogliamo fare puntatori se il numero di dati è grande 

    printf("a=*pa=%d\n", *pa); 

    //in tutti e due casi andrà a prendere il sesto elemento 
    printf("a[5]= %d\n", c[9]);
    printf ("a[5]= %d\n", *(c+5));

    // L’operazione *pa (dereferenziazione) restituisce il valore presente all’indirizzo contenuto in pa


    //programma per utilizzo di memoria malloc

    int *d;
    d = (int*) malloc(sizeof(int));
    if(d == NULL)
        {
        // errore allocazione memoria
        return 1;
        }
    *d = 5;
    printf("Il valore di d è %d\n", *d);
    free(d);
     //programma 

     

    return 0;
}