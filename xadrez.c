#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

//função para validar qual a direção da peça
char* Direcao(int num){

    if(num == 1) return "cima\n";
    if(num == 2) return "baixo\n";
    if(num == 3) return "direita\n";
    return "esquerda\n";
}

char* DirecaoDiagonal(int num){

    if(num == 1) return "Cima, direita\n";
    if(num == 2) return "Cima, esquerda\n";
    if(num == 3) return "baixo, direita\n";
    return "baixo, esquerda\n";
}

//função da movimentação da Torre
void moviTorre(int casas, int direcao){

    for (int i = 0; i < casas; i++){
        printf("%s", Direcao(direcao));
    }   
}

void moviBispo(int casas, int direcao){

    for (int i = 0; i < casas; i++) {
        printf("%s", DirecaoDiagonal(direcao));
    }
    
}

//função recursivo
void moviRainha(int casas, int direcao){

    if(casas < 1){
        return;
    }

    printf("%s", Direcao(direcao));
    moviRainha(casas - 1, direcao);
}

void moviCavalo(int vertical, int horizontal){

    for (int i = 0; i < 2; i++) {
        printf("%s\n", vertical == 1 ? "cima" : "Baixo");
    }
    printf("%s\n", horizontal == 1 ? "direita" : "esquerda");
}

int main() {
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.
    //Jogo Xadrez com três peças torre, Bispo e rainha
    int DTorre, DBispo, DRainha, DChorizontal, DCvertical;
    int casaTorre, casaBispo, casaRainha, casaCavalo;
    
    //Movimento da torre
    do{
        printf("** Direções da torre **\n");
        printf("1. Cima\n");
        printf("2. Baixo\n");
        printf("3. Direita\n");
        printf("4. Esquerda\n");
        printf("Digite a direcao em que a torre vai mover: ");
            scanf("%d", &DTorre);

            if(DTorre < 1 || DTorre > 4){
                printf("opcao invalida\n");
            }
    }while (DTorre < 1 || DTorre > 4);

    printf("Quantas casas a torre vai andar: ");
    scanf("%d", &casaTorre);

    moviTorre(casaTorre, DTorre);

    // Movimento do bispo em diagonal 
    do
    {      
    printf("** Direcao do bispo em diagonal ** \n");
    printf("1. Cima, direita\n");
    printf("2. cima, esquerda\n");
    printf("3. baixo, direita\n");
    printf("4. baixo, esquerda\n");
    printf("Digite qual direção o bispo vai mover: ");
    scanf("%d", &DBispo); 
    
    if(DBispo < 1 || DBispo > 4){
        printf("opção invalida\n");
    }
    } while (DBispo < 1 || DBispo > 4);

    printf("Quantas casas o bipo vai andar: ");
    scanf("%d", &casaBispo); 

    moviBispo(casaBispo, DBispo);

    do {   
        //Movimento da rainha
        printf("** Direções da Rainha **\n");
        printf("1. Cima\n");
        printf("2. Baixo\n");
        printf("3. Direita\n");
        printf("4. Esquerda\n");
        printf("Digite a direcao em que a rainha vai mover: ");
            scanf("%d", &DRainha);
        
        if (DRainha < 1 || DRainha > 4) {
            printf("invalido! \n");
        }
    }while (DRainha < 1 || DRainha > 4);

    printf("Quantas casas a rainha vai andar: ");
        scanf("%d", &casaRainha);
    moviRainha(casaRainha, DRainha);

        //Movimento do cavalo
    
    do {
        printf("** Direçao do cavalo horizontal**\n");
        printf("1. Direita\n");
        printf("2. Esquerda\n");
        printf("Digite a direcao do cavalo: ");
        scanf("%d", &DChorizontal);

        if (DChorizontal < 1 || DChorizontal > 4) {
            printf("invalido! \n");
        }
    }while (DChorizontal < 1 || DChorizontal > 2);
    
    do {
        printf("** Direçao do cavalo vertical**\n");
        printf("1. cima\n");
        printf("2. baixo\n");
        printf("Digite a direcao do cavalo: ");
        scanf("%d", &DCvertical);

        if (DCvertical < 1 || DCvertical > 4) {
            printf("invalido! \n");
        }
    }while (DCvertical < 1 || DCvertical > 2);

    moviCavalo(DCvertical, DChorizontal);

    return 0;
}