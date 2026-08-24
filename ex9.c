#include <stdio.h>
#include <stdint.h>

#define MAX_ITENS 50
#define NOME_LOJA "Loja do Victor"
#define ESTOQUE_MIN 5

typedef uint8_t qtd;

int main(void) {
    qtd estoque = 20;
    qtd vendidos = 5;

    printf("%s\n", NOME_LOJA);
    printf("Limite de itens: %d\n", MAX_ITENS);

    estoque = estoque - vendidos;
    printf("Estoque: %d\n", estoque);

    if (estoque < ESTOQUE_MIN) {
        printf("Acabando!\n");
    }
    return 0;
}
