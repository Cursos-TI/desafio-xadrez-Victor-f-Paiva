#include <stdio.h>

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.
    const int movimentoBispo = 5;
    const int movimentoTorre = 5;
    const int movimentoRainha = 8;
    int contador = 0;

    // Implementação de Movimentação do Bispo = 5 casas na diagonal superior direita
    printf("Movimento do Bispo: %d casas.\n", movimentoBispo);
    // movimentação com while
    while (contador < movimentoBispo){
        printf("Superior direita \n");
        contador ++;
    }
    //zerando contador para proxima peça e saltando linha
    contador = 0;
    printf("\n");
    
    // Implementação de Movimentação da Torre = 5 casas para a direita
    printf("Movimento da Torre: %d casas.\n", movimentoTorre);
    // movimentação com do while
    do {
        printf("Direita \n");
        contador++;
    } while (contador < movimentoTorre);
    //saltando linha
    printf("\n");
    
    // Implementação de Movimentação da Rainha = 8 casas para a esquerda
    printf("Movimento da Rainha: %d casas. \n", movimentoRainha);
    // movimentação com for
    for (contador=0; contador < movimentoRainha; contador++){
        printf("Esquerda \n");
    }
    //pulando linha
    printf("\n");

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
