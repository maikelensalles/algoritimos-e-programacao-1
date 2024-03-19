#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int inteiropositivo;
    int inteironegativo;
    int multiplica;

    printf("Digite o valor positivo ");
    scanf("%d", &inteiropositivo);

    printf("Digite o valor negativo2 ");
    scanf("%d", &inteironegativo);

    multiplica = inteironegativo * -1;

    printf("A multiplicação do valor negativo é %d\n", multiplica);

    return 0;
}
