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

struct automovel {
    int ano;
    char modelo[20];
    float preco;
};

int main(int argc, char const *argv[])
{
    struct automovel dadosAutomovel;

    printf("Digite o modelo do automovel:\n");
    fflush(stdin);
    fgets(dadosAutomovel.modelo, 20, stdin);

    printf("Digite o ano do automovel:\n");
    scanf("%d", &dadosAutomovel.ano);

    printf("Digite o preço do automovel:\n");
    scanf("%f", &dadosAutomovel.preco);

    printf("\n\nAutomovel 1\n");
    printf("Modelo: %s", dadosAutomovel.modelo);
    printf("Ano: %d\n", dadosAutomovel.ano);
    printf("Preço: %.2f\n", dadosAutomovel.preco);

    return 0;
}
