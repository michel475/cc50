#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#define ALFABETO 26

int main()
{
    char alf[ALFABETO], mensagem[100];
    int i, l=65, k, o;
    for(i=0; i<ALFABETO; i++)
    {
        alf[i] = l;
        l+=1;
    }
    scanf("%d", &k);
    getchar();
    fgets(mensagem, sizeof(mensagem), stdin);
    for(i=0; mensagem[i]!='\0'; ++i)
    {
        o = toupper(mensagem[i]);
        if(islower(mensagem[i]))
        {
            printf("%c", tolower(alf[((o-65)+k)%26]));
        }
        else{
            if(isupper(mensagem[i]))
            {
                printf("%c", alf[((o-65)+k)%26]);
            }
            else{
                printf("%c", mensagem[i]);
            }
        }
    }
}
