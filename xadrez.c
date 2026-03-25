#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.
    //Jogo Xadrez com três peças torre, Bispo e rainha
    int DTorre, DBispo, DRainha;
    int torre = 0, bispo = 0, rainha;

    //Movimento da torre onde o usuario fala a direção.
    printf("** Direções da torre **\n");
    printf("1. Cima\n");
    printf("2. Baixo\n");
    printf("3. Direita\n");
    printf("4. Esquerda\n");
    printf("Digite a direcao para a torre mover 5 casas: ");
    scanf("%d", &DTorre);

    printf("\n Movimento da torre: \n");
    while (torre < 5) {
        if (DTorre == 1){
            printf("Cima\n");
            torre++;
        }else if(DTorre == 2){
            printf("Baixo\n");
            torre++;           
        }else if(DTorre == 3){
            printf("Direita\n");
            torre++;
        }else if (DTorre == 4) {
            printf("Esquerda\n");
            torre++;
        }else{
            printf("opcao invalida\n");
            printf("Digite novamente: ");
            scanf("%d", &DTorre);
        }
    }

    // Movimento do bispo 5 casas em diagonal para cima e direita
    printf("\n Movimento do Bispo: \n");
    do
    {
        printf("cima, direita \n");
        bispo++;
    } while (bispo < 5);

    //Movimento da rainha 8 casas para a esquerda
    printf("\n Movimento da rainha 8 casas para a esquerda \n");
    for (rainha = 0; rainha < 8; rainha++){
        printf("esquerda \n");
    }
    return 0;
}
