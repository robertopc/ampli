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

    float notas[3][2] = {
        {1, 2},
        {3, 4},
        {5, 6}
    };

    printf("Digite uma nota: ");

    scanf("%f", &notas[1][0]);

    printf("Notas 1,2: %.2f\n", notas[0][1]);
    printf("Nota digitada: %.2f\n", notas[1][0]);

    return 0;
}
