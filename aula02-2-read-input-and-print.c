/**
 * @file aula02-2.c
 * @author your name (you@domain.com)
 * @brief lê os valores e imprime-os
 * @version 0.1
 * @date 2022-03-22
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <stdio.h>

int main(int argc, char const *argv[])
{
    float valor1=0, valor2=0;

    printf("Digite o primeiro valor:\n");
    scanf("%f", &valor1);

    printf("Digite o segundo valor:\n");
    scanf("%f", &valor2);

    printf("Variável 1 = %.2f\n", valor1);
    printf("Variável 2 = %.2f\n", valor2);
    return 0;
}
