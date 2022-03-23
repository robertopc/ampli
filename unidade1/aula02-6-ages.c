/**
 * @file aula02-3.c
 * @author your name (you@domain.com)
 * @brief declara variáveis e imprime seus valores e endereço de memória
 * @version 0.1
 * @date 2022-03-22
 *
 * @copyright Copyright (c) 2022
 *
 */
#include <stdio.h>

int main(int argc, char const *argv[])
{
    float idade[3] = {0, 0, 0};
    float media = 0;

    printf("Informe a idade da pessoa 1: \n");
    scanf("%f", &idade[0]);
    printf("Informe a idade da pessoa 2: \n");
    scanf("%f", &idade[1]);
    printf("Informe a idade da pessoa 3: \n");
    scanf("%f", &idade[2]);
    media = (idade[0] + idade[1] + idade[2]) / 3;
    printf("A médida de idade é: %.2f\n", media);
    return 0;
}
