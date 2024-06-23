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

    int simetrico = 0; 
    for (i = 0; i < N / 2; i++)
    {
        if (vet1[i] != vet1[N-1-i]) 
        {
            simetrico = 1; 
            printf("O vetor não é simétrico.\n");
            break;
        }
    }

    if (simetrico == 0)
    {
        printf("O vetor é simétrico.\n");
    }
}
