#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int total;
    printf("Qual o valor em R$ ");
    scanf("%d", &total);

    int qtd100 = total / 100;
    int resto100 =  total % 100;

    int qtd50 = resto100 / 50;
    int resto50 = resto100 % 50;

    int qtd20 = resto50 / 20;
    int resto20 = resto50 % 20;

    int qtd10 = resto20 / 10;
    int resto10 = resto20 % 10;

    int qtd5 = resto10 / 5;
    int resto5 = resto10 % 5;

    int qtd2 = resto5 / 2;
    int resto2 = resto5 % 2;


    printf("%d notas de 100\n", qtd100);
    printf("%d notas de 50\n", qtd50);
    printf("%d notas de 20\n", qtd20);
    printf("%d notas de 10\n", qtd10);
    printf("%d notas de 5\n", qtd5);
    printf("%d notas de 2\n", qtd2);

    return 0;
}
