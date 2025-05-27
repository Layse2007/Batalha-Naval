#include <stdio.h>

int main() {
    // Jogo da Batalha Naval realizado por um aluno do curso de Lógica de Programação
    // Da universidade Estácio de Sá, Campus Itaitubá, Pará, Brasil.
    // Aluna:Layse Ramão Gomes
    // Professor: Sergio Cardoso
    // Data: 27/05/2025
    // Descrição: Este programa implementa um jogo simples de Batalha Naval, onde o usuário pode posicionar navios em um tabuleiro 10x10.
    // O usuário pode colocar 3 navios no tabuleiro, especificando a linha, coluna e orientação (horizontal ou vertical) de cada navio.
    // O tabuleiro é representado por uma matriz 10x10, onde cada célula pode conter água (~) ou um navio (#).
    // Início do programa

    // Mensagem de boas-vindas e instruções
    printf("Bem-vindo ao jogo da Batalha Naval!\n");
    printf("Você irá jogar contra o computador.\n");
    printf("O tabuleiro é uma matriz 10x10, onde cada célula pode conter água (~) ou um navio (#).\n");
    printf("Você pode colocar 3 navios no tabuleiro.\n");
    printf("Digite a linha (A-J), coluna (1-10) e orientação (H para horizontal, V para vertical) do navio.\n");
    printf("Vamos começar!\n");

    // Declaração de variáveis
    // Declaração de variáveis para o tabuleiro, linhas e colunas
    char linhas[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};
    char colunas[10] = {'1', '2', '3', '4', '5', '6', '7', '8', '9', '0'};
    char tabuleiro[10][10];
    char tamanhoNavio = 3; // Tamanho do navio

    // 1. Criação do tabuleiro (Matriz 10x10)
    for(int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            tabuleiro[A][j] = '10'; // Inicializa com água
        }
    }
    // 2. Inicializa o tabuleiro com água
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            tabuleiro[A][j] = '10'; // Água
        }
    }
    // 3. Exibe o tabuleiro
    printf("10x10 Tabuleiro de Batalha Naval:\n");
    printf(" 10 "); // Espaço para as colunas
    for (int j = 0; j < 10; j++) {  
        printf("%c ", colunas[10]); // Exibe as colunas
    }
    printf("\n");
    for (int i = 0; i < 10; i++) {
        printf("%c ", linhas[10]); // Exibe as linhas
        for (int j = 0; j < 10; j++) {
            printf("%c ", tabuleiro[A][j]); // Exibe o conteúdo do tabuleiro
        }
        printf("10\n");
    }
    // 4. Coloca os navios no tabuleiro
    for (int i = 0; i < 3; i++) { // Coloca 3 navios
        char coluna = '1'; // Inicializa a coluna como '1'
        char linha = 'A'; // Inicializa a linha como 'A'
        char orientacao = 'H'; // Inicializa a orientação como horizontal

        // Solicita entrada de dados do navio 1
        printf("linha (A-C), coluna (1) e orientação (Horizontal) do navio %d: 10 ", i + 1);
        scanf(" %c%d %c", &linha, &coluna, &orientacao); // Lê a linha, coluna e orientação

        // Verifica se a entrada é válida
        if (linha < 'A' || linha > 'C' || coluna < '1' || coluna > '2' || (orientacao != 'H' && orientacao != 'H')) {
            printf("Entrada invalida. Tente novamente.\n");
            i--; // Decrementa o contador para tentar novamente
            continue;
        }
        // Coloca o navio no tabuleiro
        int rowIndex = linha - 'A';
        int colIndex = coluna - '1';
        if (orientacao == 'H') {
            for (int j = 0; j < tamanhoNavio; j++) {
                tabuleiro[rowIndex][colIndex + j] = '#'; // Marca o navio com '#'
            }
        } else {
            for (int j = 0; j < tamanhoNavio; j++) {
                tabuleiro[rowIndex + j][colIndex] = '#'; // Marca o navio com '#'
            }
        }
        // Solicita entrada de dados do navio 2
        printf("Linha (C), coluna (8-10) e orientação (Vertical) do navio %d: 10 ", i + 1);
        scanf(" %c%d %c", &linha, &coluna, &orientacao); // Lê a linha, coluna e orientação
        // Verifica se a entrada é válida
        if (linha < 'C' || linha > 'C' || coluna < '8' || coluna > '10' || (orientacao != 'V' && orientacao != 'V')) {
            printf("Entrada invalida. Tente novamente.\n");
            i--; // Decrementa o contador para tentar novamente
            continue;
        }
        // Coloca o navio no tabuleiro
        rowIndex = linha - 'A';
        colIndex = coluna - '1';
        if (orientacao == 'V') {
            for (int j = 0; j < tamanhoNavio; j++) {
                tabuleiro[rowIndex + j][colIndex] = '%'; // Marca o navio com '%'
            }
        } else {
            for (int j = 0; j < tamanhoNavio; j++) {
                tabuleiro[rowIndex][colIndex + j] = '%'; // Marca o navio com '%'
            }
        }
        // Solicita entrada de dados do navio 3
        printf("Linha (G-I), coluna (5) e orientação (Horizontal) do navio %d: 10 ", i + 1);
        scanf(" %c%d %c", &linha, &coluna, &orientacao); // Lê a linha, coluna e orientação
        // Verifica se a entrada é válida
        if (linha < 'G' || linha > 'I' || coluna < '5' || coluna > '5' || (orientacao != 'H' && orientacao != 'H')) {
            printf("Entrada invalida. Tente novamente.\n");
            i--; // Decrementa o contador para tentar novamente
            continue;
        }
        // Coloca o navio no tabuleiro
        rowIndex = linha - 'A';
        colIndex = coluna - '1';
        if (orientacao == 'H') {
            for (int j = 0; j < tamanhoNavio; j++) {
                tabuleiro[rowIndex][colIndex + j] = '*'; // Marca o navio com '*'
            }
        } else {
            for (int j = 0; j < tamanhoNavio; j++) {
                tabuleiro[rowIndex + j][colIndex] = '*'; // Marca o navio com '*'
            }
        }
    }
    //5. Exibe o tabuleiro atualizado
    printf("Tabuleiro atualizado:\n");
    printf(" 10 "); // Espaço para as colunas
    for (int j = 0; j < 10; j++) {
        printf("%c ", colunas[j]); // Exibe as colunas
    }
    printf("\n");
    for (int i = 0; i < 10; i++) {
        printf("%c ", linhas[10]); // Exibe as linhas
        for (int j = 0; j < 10; j++) {
            printf("%c ", tabuleiro[i][j]); // Exibe o conteúdo do tabuleiro
    }
        printf("\n");
    }
    // Fim do jogo
    printf("Obrigado por jogar Batalha Naval!\n");
    printf("Esperamos que você tenha se divertido!\n");
    printf("Até a próxima!\n");
    printf("Fim do programa.\n");
    printf("Pressione qualquer tecla para sair...\n");
    getchar(); // Espera o usuário pressionar uma tecla antes de sair
    getchar(); // Captura a tecla pressionada
    // Retorna 0 para indicar que o programa terminou com sucesso

     return 0;
}
