#include <stdio.h>

int main() {
    // -------------------------------
    // Criação do TABULEIRO 10x10
    // -------------------------------
    // 0 = água, 3 = parte do navio
    int tabuleiro[10][10];

    // Inicializa todas as posições com 0 (água)
    for (int linha = 0; linha < 10; linha++) {
        for (int coluna = 0; coluna < 10; coluna++) {
            tabuleiro[linha][coluna] = 0;
        }
    }

    // -------------------------------
    // Criação dos NAVIOS
    // -------------------------------
    // Cada navio tem tamanho fixo 3
    int navioHorizontal[3] = {3, 3, 3};
    int navioVertical[3] = {3, 3, 3};

    // -------------------------------
    // POSICIONAMENTO DOS NAVIOS
    // -------------------------------

    // Coordenadas iniciais do navio horizontal
    int linhaH = 2;  // linha 2
    int colunaH = 4; // começa na coluna 4

    // Verifica se está dentro dos limites (coluna final deve se
