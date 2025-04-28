#include <stdio.h>

int main() {
    // Definição das quantidades de casas a serem percorridas
    int movimentosTorre = 5;   // Torre se move 5 casas para a direita
    int movimentosBispo = 5;   // Bispo se move 5 casas para cima e direita
    int movimentosRainha = 8;  // Rainha se move 8 casas para a esquerda

    int i; // Variável de controle

    // Simulação do movimento da Torre usando 'for'
    printf("Movimento da Torre:\n");
    for (i = 0; i < movimentosTorre; i++) {
        printf("Direita\n");
    }

    printf("\n"); // Espaço entre as simulações

    // Simulação do movimento do Bispo usando 'while'
    printf("Movimento do Bispo:\n");
    i = 0; // Reinicializando a variável de controle
    while (i < movimentosBispo) {
        printf("Cima Direita\n");
        i++;
    }

    printf("\n"); // Espaço entre as simulações

    // Simulação do movimento da Rainha usando 'do-while'
    printf("Movimento da Rainha:\n");
    i = 0; // Reinicializando a variável de controle
    do {
        printf("Esquerda\n");
        i++;
    } while (i < movimentosRainha);

    return 0;
}
