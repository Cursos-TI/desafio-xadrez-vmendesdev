#include <stdio.h> // Biblioteca padrão para entrada e saída de dados

int main() {
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

    return 0; // Indica que o programa terminou com sucesso
}
