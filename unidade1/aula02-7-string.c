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
    char frase[101];

    printf("\n Digite uma frase:");
    // limpa o fluxo de entrada
    fflush(stdin);
    // obtem a entrada do usuario até 101 caracteres
    fgets(frase, 101, stdin);
    printf("\n Frase digitada: %s", frase);

    return 0;
}
