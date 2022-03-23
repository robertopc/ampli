/**
 * @file aula02-1.c
 * @author robertopc (robertopc.prog@gmail.com)
 * @brief declara variáveis e imprime-as
 * @version 0.1
 * @date 2022-03-22
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <stdbool.h>
#include <stdio.h>

int main(){
    int idade = 31;
    float salario = 1250.75;
    double desconto = 2.5;
    bool estaAprovado = false;
    char genero = 'M';
    printf("Idade: %d\n", idade);
    printf("Salário: %.2f\n", salario);
    printf("Desconto: %.2f\n", desconto);
    printf("Aprovado: %c\n", estaAprovado);
    printf("Gênero: %c\n", genero);
    return 0;
}