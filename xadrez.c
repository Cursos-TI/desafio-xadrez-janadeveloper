#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.


    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.
    // Movimento do Bispo (5 casas na diagonal para cima e à direita)

   // printf("Movimento do Bispo:\n");
// Função recursiva para o movimento do Bispo (5 casas na diagonal para cima e à direita)
    void movimento_bispo(int casas) {
        if (casas == 0) {
            return;  // Caso base: nenhuma casa para mover
        }
        printf("Cima Direita\n");
        movimento_bispo(casas - 1);  // Recursão: mover uma casa na diagonal e continuar
    }
    //printf("\n");

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.
   // printf("Movimento da Torre:\n");
// Função recursiva para o movimento da Torre (5 casas para a direita)
    void movimento_torre(int casas) {
        if (casas == 0) {
            return;  // Caso base: nenhuma casa para mover
        }
        printf("Direita\n");
        movimento_torre(casas - 1);  // Recursão: mover uma casa à direita e continuar
    }

    //printf("\n");

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.
      // Movimento da Rainha (8 casas para a esquerda)
     // printf("Movimento da Rainha:\n");
    void movimento_rainha(int casas) {
        if (casas == 0) {
            return;  // Caso base: nenhuma casa para mover
        }
        printf("Esquerda\n");
        movimento_rainha(casas - 1);  // Recursão: mover uma casa à esquerda e continuar
    }
     // printf("\n");

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.
   
    // Movimento do Cavalo (duas casas para baixo e uma para a esquerda usando loops aninhados)
    void movimento_cavalo() {
        // O Cavalo se move em "L", duas casas para cima e uma para a direita
        int vertical = 2;  // Mover 2 casas para cima
        int horizontal = 1;  // Mover 1 casa para a direita
    
        // Primeiro loop: mover para cima duas casas
        for (int i = 0; i < vertical; i++) {
            printf("Cima\n");  // Mover para cima
        }
    
        // Segundo loop: mover para a direita uma casa
        for (int j = 0; j < horizontal; j++) {
            printf("Direita\n");  // Mover para a direita
        }
    }

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.
    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

int main() {

    // Movimentação da Torre (5 casas para a direita)
    printf("Movimento da Torre:\n");
    movimento_torre(5);
    printf("\n");

    // Movimentação do Bispo (5 casas na diagonal para cima e à direita)
    printf("Movimento do Bispo:\n");
    movimento_bispo(5);
    printf("\n");

    // Movimentação da Rainha (8 casas para a esquerda)
    printf("Movimento da Rainha:\n");
    movimento_rainha(8);
    printf("\n");

    // Movimentação do Cavalo (duas casas para cima e uma para a direita)
    printf("Movimento do Cavalo:\n");
    movimento_cavalo();
    printf("\n");
    return 0;
}

