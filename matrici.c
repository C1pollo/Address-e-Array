#include <stdio.h>
#include <stdlib.h>

#define N_COLS 4
#define N_ROWS 3
void print_m(unsigned n_rows, unsigned n_cols, int m[][n_cols])
{
    int i, j;
    for(i=0; i<n_rows; i++)
    {
        for(j=0; j<n_cols ; j++){
            printf("%03d ", m[i][j]);
        }
        printf("\n");
    }
}
void transpose(unsigned n_rows, unsigned n_cols,int m_t[][n_rows],int m[][n_cols] )
//vai a prendere m_t la colonna della trasposta(la riga di a) e la coloona di a
//in questo modo hai la dimensione di a
{
    int i, j;
    for(i=0; i<n_rows; i++)
    {
        for(j=0; j<n_cols ; j++)
        {
           m_t[j][i]=m[i][j];
        }
        printf("\n");
    }
}
int main (void){
    int row_a=N_ROWS,col_a=N_COLS;
    int a[N_ROWS][N_COLS] = {{0,0,0,0},{1,1,1,1},{2,2,2,2}};
    int a_t[N_COLS][N_ROWS];

    printf("matrice A\n");
    print_m(3,4,a);
    transpose(row_a,col_a,a_t,a);
    printf("matrice A trasposta\n");
    print_m(col_a,row_a,a_t);

    return 0;
}