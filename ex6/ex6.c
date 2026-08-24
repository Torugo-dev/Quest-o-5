#include <stdio.h>

typedef unsigned char byte;
typedef int inteiro;
typedef double real;

int main(void) {
    byte idade = 21;
    inteiro qtd = 150;
    real preco = 19.90;

    printf("Idade: %u\n", idade);
    printf("Qtd: %d\n", qtd);
    printf("Preco: %.2f\n", preco);
    return 0;
}
