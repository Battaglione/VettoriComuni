#include <stdio.h>
#include <stdlib.h>
#define N 5
#define M 5

int main()
{
    int v1[N], v2[M], v3[M], i1, i2, i3, i3fin;
    for(i1 = 0 ; i1 < N; i1++)
    {
        printf("Inserisci l'elemento %d del primo vettore.\n",i1 + 1);
        scanf("%d",&v1[i1]);
    }
    for(i2 = 0 ;i2 < M; i2++)
    {
        printf("Inserisci l'elememto %d del secondo vettore.\n",i2 + 1);
        scanf("%d",&v2[i2]);
    }

    i1 = 0;
    i2 = 0;
    i3 = 0;

    for(i1 = 0; i1 < M; i1++){
        for(i2 = 0 ; i2 < M; i2++){
            if(v1[i1] == v2[i2]){
                v3[i3] = v1[i1];
                i3++;
                i2 = M;
            }
        }
    }
    i3fin = i3;
    for(i1 = 0; i1 < i3fin; i1++){
    printf("%d\n",v3[i1]);
    }

    return 0;
}
