#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int value;
    printf("Digite um valor ");
    scanf("%d", &value);

    if (value > 0)
        printf("%d positivo", value);
    else if (value < 0)
        printf("%d Negativo", value);

    return 0;
}
