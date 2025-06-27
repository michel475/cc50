#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#define CHAVE 27

int main()
{
    char chave[CHAVE];
    char mensagem[100];
    int i, o;
    fgets(chave, sizeof(chave), stdin);
    getchar();
    fgets(mensagem, sizeof(mensagem), stdin);
    for(i=0; mensagem[i]!='\0'; i++)
    {
        o = toupper(mensagem[i]);
        if(islower(mensagem[i]))
            printf("%c", tolower(chave[o-65]));
        else
            if(isupper(mensagem[i]))
                printf("%c", chave[o-65]);
            else
                printf("%c", mensagem[i]);
    }
}
