#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TAM 100
#define CANDIDATOS 3
typedef char String[TAM];

int main()
{
    int numerodeeleitores;
    String candidatos[CANDIDATOS] = {"Alice", "Bob", "Charlie"};
    printf("Numero de eleitores: ");
    scanf("%d", &numerodeeleitores);
    int votosprincipais[CANDIDATOS] = {0, 0, 0};
    int votossecundarios[CANDIDATOS] = {0, 0, 0};
    String voto;
    for(int j = 0; j<numerodeeleitores; j++)
    {
        for(int i=1; i<=3; i++)
        {
            printf("Rank %d: ", i);
            fflush(stdin);
            scanf("%s", voto);
            if((strcmp(voto, "Alice")) == 0)
            {
                if(i == 1)
                {
                    votosprincipais[0] = votosprincipais[0] + 1;
                }
                else{
                    if(i == 2)
                    {
                        votossecundarios[0] = votossecundarios[0] + 1;
                    }
                }
            }
            if((strcmp(voto, "Bob")) == 0)
            {
                if(i == 1)
                {
                    votosprincipais[1] = votosprincipais[1] + 1;
                }
                else{
                    if(i == 2)
                    {
                        votossecundarios[1] = votossecundarios[1] + 1;
                    }
                }
            }
            if((strcmp(voto, "Charlie")) == 0)
            {
                if(i == 1)
                {
                    votosprincipais[2] = votosprincipais[2] + 1;
                }
                else{
                    if(i == 2)
                    {
                        votossecundarios[2] = votossecundarios[2] + 1;
                    }
                }
            }
        }
        printf("\n\n");
    }
    int maior, indicemaior;
    maior = votosprincipais[0];
    indicemaior = 0;
    for(int i = 1; i<CANDIDATOS; i++)
    {
        if(votosprincipais[i] > maior)
        {
            maior = votosprincipais[i];
            indicemaior = i;
        }
    }
    int indicesegundo;
    int flag=0;
    for(int i = 0; i<CANDIDATOS; i++)
    {
        if(i!=indicemaior)
        {
            if(votosprincipais[i] == maior)
            {
                indicesegundo = i;
                flag=1;
            }
        }
    }
    if(flag == 1)
    {
        if(votossecundarios[indicemaior] < votossecundarios[indicesegundo])
        {
            printf("%s\n", candidatos[indicesegundo]);
        }
        else{
            printf("%s\n", candidatos[indicemaior]);
        }
    }
    else{
        printf("%s\n", candidatos[indicemaior]);
    }
}
