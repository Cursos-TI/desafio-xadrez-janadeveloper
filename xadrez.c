#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.
    // Movimento do Bispo (5 casas na diagonal para cima e à direita)
    printf("Movimento do Bispo:\n");
    int i = 1;
    while (i <= 5) {
        printf("Cima Direita\n");
        i++;
    }
    printf("\n");

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.

    // Movimento da Torre (5 casas para a direita usando um 'for')
    printf("Movimento da Torre:\n");
    for (int i = 1; i <= 5; i++) {
        printf("Direita\n");
    }

    printf("\n");
    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.
      // Movimento da Rainha (8 casas para a esquerda)
      printf("Movimento da Rainha:\n");
      int j = 1;
      do {
          printf("Esquerda\n");
          j++;
      } while (j <= 8);
      printf("\n");

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.
   
    // Movimento do Cavalo (duas casas para baixo e uma para a esquerda usando loops aninhados)
    printf("\nMovimento do Cavalo:\n");
    
    // O primeiro loop 'for' percorre o movimento para baixo duas casas
    for (int k = 1; k <= 2; k++) {
        printf("Baixo\n");
        
        // O segundo loop 'while' realiza o movimento para a esquerda uma casa
        int l = 1;
        while (l <= 1) {
            printf("Esquerda\n");
            l++;
        }
    }

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}

