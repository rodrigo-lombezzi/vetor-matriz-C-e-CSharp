#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 3

int main(){
    int mat1[N][N];

    srand(time(NULL));
    int i, k, identidade = 0;
    for (i = 0; i < N; i++)
    {
        for (k = 0; k < N; k++)
        {
            scanf("%d", & mat1[i][k]);
            printf("Matriz A: %d,\n ", mat1[i][k]);
            if(i == k && mat1[i][k] != 1) 
            {
                identidade = 1;
            }
        } 
    }
    if(identidade == 0)
    {
        printf("Matriz é uma matriz identidade");
    }
    else
    {
        printf("Matriz não é uma matriz identidade");
    }
        
}
