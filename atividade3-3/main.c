#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    float avaliacao1, avaliacao2;

    printf("Qual a nota da primeira avaliação? ");
    scanf("%f", &avaliacao1);

    printf("Qual a nota da segunda avaliação? ");
    scanf("%f", &avaliacao2);

    float media = (avaliacao1+avaliacao2)/2.0;
    if (media >= 7)
        printf("APROVADO ");
    else
        printf("REPROVADO ");

    return 0;
}
