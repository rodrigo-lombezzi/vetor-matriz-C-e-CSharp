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
        scanf("%d", & vet1[i]);
        printf("vetor A: %d,\n ", vet1[i]);
    }

    int aux, ordernado = 0;
    aux = vet1[0];
    for (i = 1; i < N; i++)
    {
        if(vet1[i] < aux)
        {
            printf("Não está ordenado de forma crescente: %d,\n ");
            ordernado = 1;
            break;
        }
        aux = vet1[i];
    }
    if(ordernado == 0)
        printf("Está ordenado de forma crescente: %d,\n ");

}
