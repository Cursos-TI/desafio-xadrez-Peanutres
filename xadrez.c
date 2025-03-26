#include <stdio.h>
//inclusão de variaveis
char movimento1[40], movimento2[40]; //uso de input manual para ficar mais facil, dado que por outros meios seria mais dificultoso atualmente
char opcaopeca;
int casas;

//loop torre
void torre(int casas){
    if (casas > 0)
    {
        printf("%s\n", movimento1);
        torre(casas - 1);
    }
    
}

//loop bispo
void bispo(int casas){
    if (casas > 0)
    {
        printf("%s\n", movimento1);
        printf("%s\n", movimento2);
        bispo(casas - 1);
    }
    
}

//loop rainha
void rainha(int casas){
    if (casas > 0)
    {
        printf("%s\n", movimento1);
        printf("%s\n", movimento2);
        rainha(casas - 1);
    }
    
}

//loop cavalo
void cavalo(int casas){
    if (casas > 0)
    {
        printf("%s\n", movimento1);
        cavalo(casas - 1);
    }

}

//jogo/codigo principal
int main(){

    printf("Bem-vindo ao jogo de Xadrez da MateCheck\n");
    printf("Selecione a peça a ser movimentada:\n"); //seleção da peça pelo jogador
    printf("B. Bispo\n");
    printf("C. Cavalo\n");
    printf("T. Torre\n");
    printf("R. Rainha\n");
    scanf(" %c", &opcaopeca);

    switch (opcaopeca) //switch para adequar a escolha correta
    {
    case 't':
    case 'T':
        printf("Você selecionou Torre\n");
        printf("Digite para aonde a peça de moverá: ");
        scanf(" %s", &movimento1);
        printf("Agora digite quantas vezes ela vai se mover: ");
        scanf(" %d", &casas);
        printf("\n");

        torre(casas);
        break;

    case 'b':
    case 'B':
        printf("Você selecionou Bispo\n");
        printf("Digite para aonde a peça de moverá: \n");
        printf("Obs.: Neste só poderar ser direta ou esquerda!!\n"); //observação para avisar a limitação ao jogador
        scanf(" %s", &movimento1);
        printf("Obs.: Neste deverar ser cima ou baixo!!\n"); //observação para avisar a limitação ao jogador
        scanf(" %s", &movimento2);
        printf("Agora digite quantas vezes ela vai se mover: \n");
        scanf(" %d", &casas);
        printf("\n");

        bispo(casas);
        break;

    case 'r':
    case 'R':
        printf("Você selecionou Rainha\n");
        printf("Digite para aonde a peça de moverá: \n");
        printf("Obs.: Neste só poderar ser direta, esquerda ou nenhum!!\n"); //observação para avisar a limitação ao jogador
        scanf(" %s", &movimento1);
        printf("Obs.: Neste deverar ser cima, baixo ou nenhum!!\n"); //observação para avisar a limitação ao jogador
        scanf(" %s", &movimento2);
        printf("Agora digite quantas vezes ela vai se mover: \n");
        scanf(" %d", &casas);
        printf("\n");

        rainha(casas);
        break;

    case 'c':
    case 'C':
        printf("Você selecionou Cavalo\n");
        printf("Digite para aonde a peça de moverá: \n");
        printf("Obs.: Neste só poderar ser direta ou esquerda!!\n"); //observação para avisar a limitação ao jogador
        scanf(" %s", &movimento1);
        printf("Obs.: Neste deverar ser cima ou baixo!!\n"); //observação para avisar a limitação ao jogador
        scanf(" %s", &movimento2);
        printf("\n");

        cavalo(2);

        printf("%s", movimento2);
        break;
    
    default:
        printf("Opção Invalida!!!\n");
        break;
    }
    return 0;
}

