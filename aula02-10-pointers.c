#include <stdio.h>

int main(int argc, char const *argv[])
{
    int num[2] = {123, 456};
    printf("Utilizando índice do vetor: %d\n", num[0]);
    printf("Utilizando ponteiro: %d\n", *num);
    return 0;
}
