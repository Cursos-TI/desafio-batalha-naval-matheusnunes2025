#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Nível Novato - Posicionamento dos Navios
    // Criado a matriz 10 por 10.
    int tabuleiro[10][10];

    //Inicializa as variáveis
    for(int i=0; i < 10; i++){
        for(int j=0; j < 10; j++){
            tabuleiro[i][j] = 0;
        }
        printf("\n");
    }

    // Posicionando os valores dos návios
    tabuleiro[4][5] = 3;
    tabuleiro[4][6] = 3;
    tabuleiro[4][7] = 3;

    tabuleiro[5][3] = 3;
    tabuleiro[6][3] = 3;
    tabuleiro[7][3] = 3;
    
    //Exibir as Letras Horizontal
    for (char letra = 'A'; letra <= 'J'; letra++) {
        if(letra == 'A'){
            printf("   %c", letra);
        }else{
            printf(" %c", letra);
        }
    }
    printf("\n");
    //Exibição da matriz
    for(int i=0; i < 10; i++){
        //Exibir Números Vertical
        printf("%2d ", i+1);
        for(int j=0; j < 10; j++){
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }
    // Nível Aventureiro - Expansão do Tabuleiro e Posicionamento Diagonal
    // Sugestão: Expanda o tabuleiro para uma matriz 10x10.
    // Sugestão: Posicione quatro navios no tabuleiro, incluindo dois na diagonal.
    // Sugestão: Exiba o tabuleiro completo no console, mostrando 0 para posições vazias e 3 para posições ocupadas.

    // Nível Mestre - Habilidades Especiais com Matrizes
    // Sugestão: Crie matrizes para representar habilidades especiais como cone, cruz, e octaedro.
    // Sugestão: Utilize estruturas de repetição aninhadas para preencher as áreas afetadas por essas habilidades no tabuleiro.
    // Sugestão: Exiba o tabuleiro com as áreas afetadas, utilizando 0 para áreas não afetadas e 1 para áreas atingidas.

    // Exemplos de exibição das habilidades:
    // Exemplo para habilidade em cone:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 1 1 1 1 1
    
    // Exemplo para habilidade em octaedro:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 0 0 1 0 0

    // Exemplo para habilidade em cruz:
    // 0 0 1 0 0
    // 1 1 1 1 1
    // 0 0 1 0 0

    return 0;
}
