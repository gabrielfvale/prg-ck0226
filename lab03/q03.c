#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    void best_lap(int n, int *v)
    {
        int i, BestTime = v[0], BestLap = 1;
        for(i = 0; i < n; i++)
        {
            if (v[i] < BestTime) 
            {
                BestTime = v[i];
                BestLap = i+1;
            }
        }
        printf("Seu melhor tempo foi %ds, durante a %da volta.\n", BestTime, BestLap);
    }
    void worst_lap(int n, int *v)
    {
        int i, WorstTime = v[0], WorstLap = 1;
        for(i = 0; i < n; i++)
        {
            if (v[i] > WorstTime) 
            {
                WorstTime = v[i];
                WorstLap = i+1;
            }
        }
        printf("Seu pior tempo foi %ds, durante a %da volta.\n", WorstTime, WorstLap);
    }
    void average_time(int n, int *v)
    {
        int TotalTime = 0, AverageTime, i;
        for (i = 0; i < n; i++)
        {
            TotalTime += v[i];
        }
        AverageTime = TotalTime/n;
        printf("O tempo medio foi %ds.\n", AverageTime);
    }
    int laps, k;
    int *v = (int *) malloc(laps * sizeof(int));
    printf("Digite quantas voltas foram dadas:\n");
    scanf("%d", &laps);
    printf("Digite o tempo, em segundos, durante cada volta:\n");
    for (k = 0; k < laps; k++)
    {
        scanf("%d", &v[k]);
    }
    best_lap(laps, v);
    worst_lap(laps, v);
    average_time(laps, v);
    return 0;
}