#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TAM 100
typedef char String[TAM];

int main()
{
    int n, n2, flag;
    printf("Digite o numero de candidatos: ");
    scanf("%d", &n);
    String candidatos[n];
    int numerovotos[n];
    printf("Digite o nome do(s) %d candidatos:\n", n);
    printf("De enter para cada nome que digitar\n");
    for(int i=0; i<n; i++)
    {
        fflush(stdin);
        scanf("%s", candidatos[i]);
        numerovotos[i] = 0;
    }
    printf("Numero de eleitores: ");
    String voto;
    scanf("%d", &n2);
    getchar();
    for(int i=0; i<n2; i++)
    {
        flag=0;
        printf("Voto: ");
        fflush(stdin);
        scanf("%s", voto);
        for(int j=0; j<n; j++)
        {
            String candi;
            strcpy(candi, candidatos[j]);
            if((stricmp(candi, voto)) == 0)
            {
                flag=1;
                numerovotos[j] = numerovotos[j] + 1;
            }
        }
        if(flag == 0)
        {
            printf("Voto invalido\n");
            i--;
        }
    }
    int maior, indicemaior;
    maior = numerovotos[0];
    indicemaior = 0;
    for(int i = 1; i<n; i++)
    {
        if(numerovotos[i] > maior)
        {
            maior = numerovotos[i];
            indicemaior = i;
        }
    }
    for(int i=0; i<n; i++)
    {
        if(numerovotos[i] == maior)
        {
            printf("%s\n", candidatos[i]);
        }
    }

    return 0;
}
