#include <stdio.h>
#include <stdlib.h>
#define MAX 10000
int main()
{
    FILE* PTARQ;
    PTARQ = fopen("reversed10000.txt", "w");
    int v[MAX];
    for(int i=MAX; i>=1; i--)
    {
        v[MAX-i] = i;
    }
    for(int i=0; i<MAX; i++)
    {
        fprintf(PTARQ, "%d\n", v[i]);
    }
    fclose(PTARQ);
    PTARQ = fopen("reversed10000(pos-ordenacao).txt", "w");
    for(int i=0; i<MAX; i++)
    {
        for(int j=i+1; j<MAX; j++)
        {
            if(v[i]>v[j])
            {
                int aux = v[i];
                v[i] = v[j];
                v[j] = aux;
            }
        }
        fprintf(PTARQ, "%d\n", v[i]);
    }
}
