#include <stdio.h>
#include <stdlib.h>
#define N 5

int main(){
    int vet1[N];

    int i;
    for (i = 0; i < N; i++)
    {
        scanf("%d", & vet1[i]);
        printf("vetor A: %d,\n ", vet1[i]);
    }

    for (i = 0; i < N; i++)
    {
        if (vet1[i] < 0)
        {
            vet1[i] = 0;
        }

        printf("vetor A: %d,\n ", vet1[i]);
    }
    
}
