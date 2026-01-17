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
        printf("Cima \n");
        printf("Direita \n");
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
    //pulando linha e zerando contador
    contador = 0;
    printf("\n");
    
    // Nível Aventureiro - Movimentação do Cavalo = 2 casas para baixo e 1 casa para a esquerda
    printf("Movimento do Cavalo: 3 casas. \n");
    //loop externo for faz o movimento de 1 salto
    for (contador=0; contador <2; contador++){ 
        // loop interno 'do while' faz movimento de 2 saltos
        do {
            printf("Baixo \n");
            contador ++;
        } while (contador <2);       
        printf("Esquerda \n");
    }
    /*
    OBS SOBRE O CAVALO
    para que o movimento de 1 salto seja antes do movimento de 2 saltos, 
    o printf do loop externo deve estar antes do loop 'do while'.
    Caso deixe como está o movimento de 1 salto será depois do movimento de 2 saltos
    */ 
    //pulando linha
    printf("\n");

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
