#include <stdio.h>

int main()
{
    int i, j, k, n;
    printf("Digite o tamanho da piramide: ");
    scanf("%d", &n);
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n; j++)
        {
            if(j>n-i)
                printf("#");
            else
                printf(" ");
        }
        printf(" ");
        for(k=1; k<=i; k++)
            printf("#");
        printf("\n");
    }

    return 0;
}
