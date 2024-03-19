#include <stdio.h>

int main(int argc, char *argv[]) {
    printf("Qual a idade da pessoa em dias?");
    scanf("%d", &totalDias);

    int anos = totalDias / 365;
    int retoAnos = totalDias % 365;
    int meses = restoAnos / 30;
    int dias = restoAnos % 30;

    printf("%d anos \n", anos);
    printf("%d meses \n", meses);
    printf("%d dias \n", dias);

    return 0;
}
