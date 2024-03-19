#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

    printf("\n ------ Catálogo de produtos -----");
    printf("\n Código    Nome  Preco");
    printf("\n 1001     Laranja  R$6,20");
    printf("\n 1002     Macas R$8,90");
    printf("\n 1003     Bergamota R$2,50");
    printf("\n 1004     Cebola R$3,50");

    int codigo;
    printf("\n Qual o codigo do produto? ");
    scanf("%d", &codigo);

    float peso;
    printf("\n Qual o peso? ");
    scanf("%f", &peso);

    if (codigo ==1001) {
        printf("\n Comprou Laranjas!");
        float total = peso * 6.20;
        printf("Total R$ %.2f", total);
    }

    if (codigo ==1002) {
        printf("\n Comprou Macas!");
        float total = peso * 8.9;
        printf("Total R$ %.2f", total);
    }

    if (codigo ==1003) {
        printf("\n Comprou Bergamota!");
        float total = peso * 2.50;
        printf("Total R$ %.2f", total);
    }

    if (codigo ==1004) {
            printf("\n Comprou Cebola!");
        float total = peso * 3.50;
        printf("Total R$ %.2f", total);
    }

    return 0;
}
