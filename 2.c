#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 5

int main(){
    int vet1[N], vet2[N];

    srand(time(NULL));
    int i;
    for (i = 0; i < N; i++)
    {
        vet1[i] = rand()%11;
        printf("vetor A: %d,\n ", vet1[i]);
        vet2[i] = rand()%11;
        printf("vetor B: %d,\n ", vet2[i]);
    }

    int prodEsc = 0;
    for (i = 0; i < N; i++)
    {
        prodEsc += vet1[i] * vet2[i];
    }
    printf("Produto escalar: %d,\n ", prodEsc);

}
