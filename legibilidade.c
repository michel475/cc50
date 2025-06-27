#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <ctype.h>
#include <string.h>

int contaletras(char Texto[])
{
    int i, contador=0;
    for(i=0; Texto[i]!='\0'; i++)
    {
        if(isalpha(Texto[i]))
        {
            contador++;
        }
    }
    return contador;
}

int contapalavras(char Texto[])
{
    int i, contap=1;
    for(i=0; Texto[i]!='\0'; i++)
    {
        if(Texto[i]==' ')
        {
            contap++;
        }
    }
    return contap;
}

int contasentenca(char Texto[])
{
    int i, contsent=0;
    for(i=0; Texto[i]!='\0'; i++)
    {
        if(Texto[i]=='.' || Texto[i]=='!' || Texto[i]=='?')
        {
            contsent++;
        }
    }
    return contsent;
}

int main()
{
    setlocale(LC_ALL, "Portuguese");
    char string[1000];
    int quantletra, quantpalav, quantsente, indice;
    float ind, l, s;
    scanf("%[^\n]s", string);
    quantletra = contaletras(string);
    quantpalav = contapalavras(string);
    quantsente = contasentenca(string);
    l = 100.0 * quantletra / quantpalav;
    s = 100.0 * quantsente / quantpalav;
    ind = 0.0588 * l - 0.296 * s - 15.8;
    indice = round(ind);
    if(indice<1)
    {
        printf("Before Grade 1\n");
    }
    if(indice>=16)
    {
        printf("Grade 16+\n");
    }
    switch(indice)
    {
        case 1:
            printf("Grade 1\n");
            break;
        case 2:
            printf("Grade 2\n");
            break;
        case 3:
            printf("Grade 3\n");
            break;
        case 4:
            printf("Grade 4\n");
            break;
        case 5:
            printf("Grade 5\n");
            break;
        case 6:
            printf("Grade 6\n");
            break;
        case 7:
            printf("Grade 7\n");
            break;
        case 8:
            printf("Grade 8\n");
            break;
        case 9:
            printf("Grade 9\n");
            break;
        case 10:
            printf("Grade 10\n");
            break;
        case 11:
            printf("Grade 11\n");
            break;
        case 12:
            printf("Grade 12\n");
            break;
        case 13:
            printf("Grade 13\n");
            break;
        case 14:
            printf("Grade 14\n");
            break;
        case 15:
            printf("Grade 15\n");
            break;
    }
    return 0;
}
