#include <stdlib.h>

int myfunc(int **values) {
    *values = (int*) malloc(sizeof(int) * 5); // Alloca memoria per 5 interi4
    if (*values==NULL){
        return -1;
    }
    
    for (int i=0; i < 5; i++)
        (values)[i] = i;
    return 5;

}

int main() {
    int *values, size;
    size = myfunc(&values); // Chiama myfunc, passando l'indirizzo di 'values'
    // l'unico modo per aggiornare il dato e passarlo all'indirizzo 
    if (values == NULL) {   // Controlla se l'allocazione è fallita
        return 1;
    }

    for (int i=0; i < 5; i++)
        printf("%d", values[i]);
    printf("\n");
    

    free(values); // Libera la memoria allocata
    return 0;
}