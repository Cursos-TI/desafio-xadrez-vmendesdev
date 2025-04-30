#include <stdio.h>

// ----------------------------------
// NÍVEL MESTRE – Função Recursiva para o BISPO
// Movimenta 5 casas na diagonal superior direita (Cima + Direita)
// ----------------------------------
void moverBispo(int passo, int max) {
    if (passo > max) return;

    printf("Passo %d: Cima\n", passo);
    printf("Passo %d: Direita\n", passo);

    moverBispo(passo + 1, max); // Chamada recursiva
}

// ----------------------------------
// NÍVEL MESTRE – Função Recursiva para a TORRE
// Movimenta 5 casas para a Direita
// ----------------------------------
void moverTorre(int passo, int max) {
    if (passo > max) return;

    printf("Passo %d: Direita\n", passo);

    moverTorre(passo + 1, max);
}

// ----------------------------------
// NÍVEL MESTRE – Função Recursiva para a RAINHA
// Movimenta 8 casas para a Esquerda
// ----------------------------------
void moverRainha(int passo, int max) {
    if (passo > max) return;

    printf("Passo %d: Esquerda\n", passo);

    moverRainha(passo + 1, max);
}

// ----------------------------------
// NÍVEL AVENTUREIRO – Movimento do CAVALO com loops aninhados
// Cavalo se move em L: 2 casas para baixo e 1 para a esquerda
// Inclui uso de continue e break
// ----------------------------------
void moverCavalo() {
    const int movimentos = 3;

    printf("=== Movimentação do Cavalo (forma de L com loops aninhados) ===\n");

    for (int i = 1; i <= movimentos; i++) {
        printf("Movimento %d:\n", i);

        int j = 1;
        while (j <= 3) {
            if (j == 2) {
                j++;           // Pula o passo 2
                continue;      // Vai direto para o próximo
            }

            if (j > 3) break;  // Garante que não ultrapasse o limite

            if (j <= 2) {
                printf("  Passo %d: Baixo\n", j);
            } else {
                printf("  Passo %d: Esquerda\n", j);
            }

            j++;
        }

        printf("\n"); // Separação entre movimentos
    }
}

// ----------------------------------
// FUNÇÃO PRINCIPAL – Chama todas as movimentações
// ----------------------------------
int main() {
    // -------------------------
    // NÍVEL NOVATO
    // -------------------------
    printf("=== NÍVEL NOVATO ===\n\n");

    // BISPO com loop for (Versão do Novato)
    printf("-> Bispo (5 casas na diagonal superior direita)\n");
    for (int i = 1; i <= 5; i++) {
        printf("Passo %d: Cima\n", i);
        printf("Passo %d: Direita\n", i);
    }
    printf("\n");

    // TORRE com loop for (Versão do Novato)
    printf("-> Torre (5 casas para a direita)\n");
    for (int i = 1; i <= 5; i++) {
        printf("Passo %d: Direita\n", i);
    }
    printf("\n");

    // RAINHA com loop for (Versão do Novato)
    printf("-> Rainha (8 casas para a esquerda)\n");
    for (int i = 1; i <= 8; i++) {
        printf("Passo %d: Esquerda\n", i);
    }
    printf("\n");

    // -------------------------
    // NÍVEL AVENTUREIRO
    // -------------------------
    printf("=== NÍVEL AVENTUREIRO ===\n\n");
    moverCavalo();

    // -------------------------
    // NÍVEL MESTRE
    // -------------------------
    printf("=== NÍVEL MESTRE ===\n\n");

    printf("-> Bispo (Recursão)\n");
    moverBispo(1, 5);
    printf("\n");

    printf("-> Torre (Recursão)\n");
    moverTorre(1, 5);
    printf("\n");

    printf("-> Rainha (Recursão)\n");
    moverRainha(1, 8);
    printf("\n");

    return 0;
}
