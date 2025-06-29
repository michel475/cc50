#include <stdio.h>
#include <stdlib.h>

int main()
{
    int ano1, ano2;
    int aux, n=0;
    printf("Start size: ");
    scanf("%d", &ano1);
    printf("End size: ");
    scanf("%d", &ano2);
    aux = ano1;
    while(ano1<ano2)
    {
        aux = ano1 + (ano1/3) - (ano1/4);
        ano1 = aux;
        n++;
    }
    printf("Years: %d\n", n);

    return 0;
}
