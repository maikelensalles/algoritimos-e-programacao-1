#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int faltas;

    printf("Quantas faltas teve?");
    scanf("%d", &faltas);

    float nota1, nota2;
    printf("Qual a primeira nota?");
    scanf("%f", &nota1);
    printf("Qual a segunda nota?");
    scanf("%f", &nota2);

    float media = (nota1+nota2)/2.0;
    if (faltas > 20)
        printf("Reprovado por faltas!");
    else if (media >= 7)
            printf("Aprovado! media %.2f", media);
    else
        printf("Reprovado! media %.2f", media);

    return 0;
}
