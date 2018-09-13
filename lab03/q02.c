#include <stdio.h>

int main(void)
{
    int max(int *v, int s)
    {
        int i, max_num = v[0];
        for (i = 1; i < s; i++) 
        {
            v[i] > max_num ? max_num = v[i] : 0;
        }
        return max_num;
    }
    int min (int *v, int s)
    {
        int i, min_num = v[0];
        for (i = 1; i < s; i++)
        {
            v[i] < min_num ? min_num = v[i] : 0;
        }
        return min_num;
    }
    int a[5], i;
    printf("Digite os valores do vetor:\n");
    for (i = 0; i < 5; i++) 
    {
        scanf("%d", &a[i]);
    }
    printf("Numero minimo: %d\nNumero maximo: %d\n", min(a, 5), max(a, 5));
    return 0;
}