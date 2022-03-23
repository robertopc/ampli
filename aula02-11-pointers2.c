#include <stdio.h>

int main(int argc, char const *argv[])
{
    int ano = 2018;
    int *ponteiro_para_ano = &ano;

    // Na linha 1 criamos uma variável primitiva inteira, denominada ano, com valor 2018, 
    // e na linha 2 associamos um ponteiro chamado ponteiro_para_ano ao endereço da variável 
    // primitiva ano.Agora tudo que estiver atribuído à variável ano estará acessível ao ponteiro ponteiro_para_ano.

    // Para finalizar esta aula, vamos ver como imprimir as informações de um ponteiro.
    // Podemos imprimir o conteúdo do ponteiro, que será o endereço da variável a que ele aponta.
    // Utilizando o ponteiro criado anteriormente(ponteiro_para_ano), temos a seguinte sintaxe :

    printf("\n Conteúdo do ponteiro: %p", ponteiro_para_ano);

    // O especificador de formato % p é usado para imprimir o endereço de memória armazenado em um ponteiro, 
    // em hexadecimal(o % x também poderia ser usado).Também podemos acessar o conteúdo da variável que o ponteiro aponta, com a seguinte sintaxe :

    printf("\n Conteúdo da variável pelo ponteiro: %d", *ponteiro_para_ano);

    // A diferença do comando anterior é o asterisco antes do nome do ponteiro.
    // Podemos, também, imprimir o endereço do próprio ponteiro, por meio da seguinte sintaxe :

    printf("\n Endereco do ponteiro: %p\n", &ponteiro_para_ano);
}
