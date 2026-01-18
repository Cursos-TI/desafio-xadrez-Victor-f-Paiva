#include <stdio.h>

//5 casas na diagonal direita para cima
void moveBispo(int casas) {
    //controlador de encerramento da função moveBispo()
    if (casas == 0) { return;}

    //loop externo com movimento vertical
    for (int i=0; i<1; i++) {
        //loop interno com movimento horizontal
        for (int j=0; j<1; j++){
            printf("Direita \n");
        }
        printf("Cima \n"); //movimento do loop externo
    }

    //chamando a recursividade
    moveBispo(casas -1);
    }

//5 casas para a direita
void moveTorre (int casas) {
    if (casas >0) {
        printf("Direita \n");
        moveTorre(casas -1);
    }
}

//8 casas para a esquerda
void moveRainha (int casas) {
    if (casas > 0) {
        printf("Esquerda \n");
        moveRainha(casas -1);
    }
}

int main() {

    printf("Movimento do Bispo = 5 casas \n");
    moveBispo(5);
    //saltar linha
    printf("\n");
    
    printf("Movimento da Torre = 5 casas \n");
    moveTorre(5);
    //saltar linha
    printf("\n");
    
    printf("Movimento da Rainha = 8 casas \n");
    moveRainha(8);
    //saltar linha
    printf("\n");
    
    printf("Movimento do Cavalo: 3 casas. \n");
    int contador =0;
    while (contador <= 0){
        //loop para movimentar o cavalo 2 vezes
        for (int i=0; i<2 && contador ==0; i++) {
            printf("Cima \n");
        }
        //movimenta o cavalo 1 vez
        printf("Direita \n");
        contador ++;
    }
    //pulando linha
    printf("\n");
        
    return 0;
}
