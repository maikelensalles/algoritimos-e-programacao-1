#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    float rendimentos;
    printf("Qual o seu rendimento? ");
    scanf("%f", &rendimentos);

    if (rendimentos <=  22847.76)
    {
        printf("Isento! Nada  a pagar!");
    }

    else if (rendimentos <= 33919.80)
    {
        float imposto = rendimentos*7.5/100.0;
        printf("Alicota 7.5%%! Total R$ %.2f", imposto);
    }

    else if (rendimentos <= 45012.60)
    {
        float imposto = rendimentos*15.0/100.0;
        printf("Alicota 15%%! Total R$ %.2f", imposto);
    }

    else if (rendimentos <= 55976.16)
    {
        float imposto = rendimentos*22.5/100.0;
        printf("Alicota 22.5%%! Total R$ %.2f", imposto);
    }
    else
    {
        float imposto = rendimentos*27.5/100.0;
        printf("Alicota 27.5%%! Total R$ %.2f", imposto);
    }
    return 0;
}
