#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 5

int main(){
    int vet1[N];

    srand(time(NULL));
    int i;
    for (i = 0; i < N; i++)
    {
        vet1[i] = rand()%11;
        printf("vetor A: %d,\n ", vet1[i]);
    }

    int cont = 0;
    for (i = 0; i < N; i++)
    {
        if(vet1[i] % 2 == 0)
        {
            cont++;
            printf("Par: %d,\n ", vet1[i]);
        }
        
    }
    printf("Quantidade de pares: %d,\n ", cont);
}
