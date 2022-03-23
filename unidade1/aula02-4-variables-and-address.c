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
    int x=5,y=10;


    printf("Valor guardado em x: %d\n", x);
    printf("Valor guardado em y: %d\n", y);

    printf("Endereço de memória x: %x\n", &x);
    printf("Endereço de memória y: %x\n", &y);
    return 0;
}
