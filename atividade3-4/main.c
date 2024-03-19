#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int value1;
    int value2;

    printf("Entre com dois inteiros e eu lhe direi\n");
    printf("as relações que eles satisfazem: ");
    scanf("%d%d", &value1, &value2);

    if ( value1 > value2 )
        printf("%d é maior que %d\n", value1, value2);

    if ( value2 > value1 )
        printf("%d é maior que %d\n", value2, value1 );

    return 0;
}
