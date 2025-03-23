#include <stdio.h>
  
void movimentoTorre(int i) {
    if (i < 5){
        printf("Direita\n");
        movimentoTorre(i + 1);
    }
}

void movimentoBispo(int i) {
    if (i < 5){
        printf("cima, direita\n");
    movimentoBispo(i + 1);
}
}

void movimentoRainha (int i){
    if (i < 8){
printf("esquerda\n");
        movimentoRainha (i + 1); }
    }

void movimentoCavalo () {
    int x, y;
    for (x = 0; x < 2; x++) {
        printf("cima\n");
    }
    for (y = 0; y < 1; y++) {
        printf("direita\n");
    }
}


int main() {
    printf("\nMovimento da torre:\n");
    movimentoTorre(0);
    printf("\nMovimento do bispo:\n");
    movimentoBispo(0);
    printf("\nMovimento da rainha:\n");
  movimentoRainha(0);
  printf("\nMovimento do cavalo:\n");
  movimentoCavalo();


return 0;
}
