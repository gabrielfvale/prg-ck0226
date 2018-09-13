#include <stdio.h>

int main(void) 
{
    int a[5];
    int b[8];
    int i, j;
    printf("Digite os valores inteiros do primeiro vetor:\n");
    for(i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Digite os valores inteiros do segundo vetor:\n");
    for(i = 0; i < 8; i++)
    {
        scanf("%d", &b[i]);
    }
    printf("Valores em comum:\n");
    for (i = 0; i < 5; i++)
    {
        for(j = 0; j < 8; j++)
        {
            if (a[i] == b[j]) 
            {
                printf("%d\n", a[i]);
                continue;
            }
        }
    }
    return 0;
}