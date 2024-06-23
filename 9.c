#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 3

int main(){
    int mat1[N][N];

    srand(time(NULL));
    int i, k, maior = 0;
    for (i = 0; i < N; i++)
    {
        for (k = 0; k < N; k++)
        {
            mat1[i][k] = rand()%11;
            printf("Matriz A: %d,\n ", mat1[i][k]);
            if(maior < mat1[i][k])
                maior = mat1[i][k];
        }
    }

    printf("maior: %d", maior);

}
