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
    float altura[3] = {1, 1.5, 1.7};
    // altura[0] = 1;
    // altura[1] = 1.5;
    // altura[2] = 1.7;

    printf("Vetor altura[0] = %.2f\n", altura[0]);
    printf("Vetor altura[1] = %.2f\n", altura[1]);
    printf("Vetor altura[2] = %.2f\n", altura[2]);
    return 0;
}
