#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 10

int main(){
    srand(time(NULL));
    int vet1[N];

    int i;
    for (i = 0; i < N; i++)
    {
        vet1[i] = rand()%11;
        printf("vetor A: %d,\n ", vet1[i]);
    }
    int j, aux = 0;
    for (int i = 0; i < N - 1; i++)
    {
        for (int j = 0; j < N - i - 1; j++) 
        {
            if (vet1[j] > vet1[j + 1]) 
            {
                aux = vet1[j];
                vet1[j] = vet1[j + 1];
                vet1[j + 1] = aux;
            }
        }
    }
    for (i = 0; i < N; i++)
    {
        printf("vetor A ordenado: %d,\n ", vet1[i]);
    }
    
    
}
