#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand(time(NULL));
    int num, palpite, tentativas, opcao;

    inicio_jogo:
    tentativas = 0;
    num = (rand() % 5) + 1;

    printf("\n--- Jogo de Adivinhar Numero ---\n");

    // Loop para continuar tentando até acertar
    do {
        printf("Informe um valor de 1 ate 5: ");
        scanf("%i", &palpite);
        tentativas = tentativas + 1;

        if(palpite > num){
            printf("Seu palpite e maior que o numero sorteado\n\n");
        }else if(palpite < num){
            printf("Seu palpite e menor que o numero sorteado\n\n");
        }else{
            printf("Parabens! Seu palpite e igual ao numero sorteado\n");
        }
    } while(palpite != num);

    printf("O numero sorteado era: %i\n", num);
    printf("Total de tentativas: %i\n", tentativas);

    // Menu simples para continuar jogando
    printf("\nDeseja jogar novamente? (1- Sim / 2- Nao): ");
    scanf("%i", &opcao);

    if(opcao == 1){
        goto inicio_jogo;
    }

    printf("Fim do jogo\n");
    return 0;
}
