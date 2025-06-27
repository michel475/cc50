#include <ctype.h>
#include <stdio.h>
#include <string.h>

int POINTS[] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10}; //Vetor que contém a quantidade de pontos de cada letra do alfabeto
int compute_score(char *Word);

int main(void)
{
	char Word1[20], Word2[20]; //Declaração do vetor de caracteres que será lido como string afim de armazenar as palavras dos jogadores 1 e 2.

    //Leitura das palavras digitadas pelos jogadores

    scanf("%s", Word1);
    scanf("%s", Word2);


    //Chama a função compute_score passando como parametro a string digitada pelo primeiro jogador e pelo segundo jogador e armazena nas variáveis score1 e score2 respectivamente
    int score1 = compute_score(Word1);
    int score2 = compute_score(Word2);

    if(score1==score2) //Se score1 for igual a score2 então empatou
        printf("Empate!\n");
    else
        if(score1>score2) //Se score1 for maior que score2 então score1 venceu, mostra que player 1 venceu e apresenta sua respectiva quantidade de pontos.
            printf("Player 1 ganhou com %d pontos\n", score1);
        else
            if(score2>score1) //Se score2 for maior que score1 então score2 venceu, mostra que player 2 venceu e apresenta a respectiva quantidade de pontos do player.
                printf("Player 2 ganhou com %d pontos\n", score2);
}

int compute_score(char *Word)
{
    int c, i, contador=0; //Um inteiro c para pegar o código ASCII da i-ésima letra (convertida para maiúsculo)
    for(i=0; Word[i]!='\0'; i++)
    {
        c = toupper(Word[i]); //Pega o código ASCII da i-ésima letra convertida para maiúsculo
        contador += POINTS[c-65]; //Realização do cálculo da posição respectiva daquela letra no vetor POINTS e acumula na variável contador
    }

    return contador; //retorna a variável contador que deve ter a quantidade de pontos efetuados pela string passada.
}
