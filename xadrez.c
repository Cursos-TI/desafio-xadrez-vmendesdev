#include <stdio.h> // Biblioteca padrão para entrada e saída de dados

int main() {
    // MOVIMENTO DO BISPO
    // Constante que define quantas vezes o bispo irá se mover na diagonal
    const int passos = 5;

    // Mensagem inicial para organizar a saída
    printf("Movimentação do Bispo (diagonal superior direita):\n");

    // Loop que representa os passos do bispo
    for(int i = 1; i <= passos; i++) {
        // Mostra que o bispo está indo para cima
        printf("Passo %d: Cima\n", i);
        
        // Mostra que o bispo está indo para a direita
        printf("Passo %d: Direita\n", i);
    }

    printf("\n"); // Linha em branco para separar os movimentos

    // MOVIMENTO DA TORRE
    // Constante que define os passos da torre
    const int passos_torre = 5;

    // Título da seção de movimento da torre
    printf("Movimentação da Torre (para a direita):\n");

    // Laço de repetição para movimentar a torre
    for (int i = 1; i <= passos_torre; i++) {
        // Movimento em linha reta para a direita
        printf("Passo %d: Direita\n", i);
    }

    printf("\n"); // Linha em branco para separar os movimentos

    // MOVIMENTO DA RAINHA
    // Constante que define os passos da rainha
    const int passos_rainha = 8;

    // Título da seção de movimento da rainha
    printf("Movimentação da Rainha (para a esquerda):\n");

    // Laço de repetição para movimentar a rainha
    for (int i = 1; i <= passos_rainha; i++) {
        // Movimento em linha reta para a esquerda
        printf("Passo %d: Esquerda\n", i);
    }

    // ----------------------------------
    // MOVIMENTO DO CAVALO (NÍVEL AVENTUREIRO)
    // ----------------------------------
    // Quantas vezes o cavalo fará o movimento completo em L
    const int movimentos = 3;

    // Exibe o tipo de movimentação
    printf("Movimentação do Cavalo (forma de L: 2 para baixo e 1 para esquerda):\n");

    // Loop externo define quantas vezes o movimento em L será feito
    for (int i = 1; i <= movimentos; i++) {
        printf("Movimento %d:\n", i);

        // Loop interno 1: andar 2 vezes para baixo (usando while)
        int j = 1;
        while (j <= 2) {
            printf("  Passo %d: Baixo\n", j);
            j++;
        }

        // Movimento final do L: 1 vez para esquerda
        printf("  Passo 3: Esquerda\n");

        printf("\n"); // Espaço entre os movimentos
    }

    return 0; // Indica que o programa terminou com sucesso
}
