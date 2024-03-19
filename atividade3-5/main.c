#include <stdio.h>
#include <stdlib.h>

/* Faça um programa na linguagem C, para ler a idade de uma pessoa. Informe se a pessoa já possui idade
para votar, ou seja, se tem pelo menos 16 anos, mostrar a mensagem “Poderá votar”. Caso tenha menos
de 16 anos, o programa deve mostrar a mensagem “Aguarde até os 16 anos”. */

int main(int argc, char *argv[]) {
    int idade;
    printf("Qual a sua idade? ");
    scanf("%d", &idade);

    if (idade >= 16)
        printf("Poderá votar");
    else
        printf("Aguarde até os 16 anos");

    return 0;
}
