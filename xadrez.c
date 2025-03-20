#include <stdio.h>

int main(){
    int movimento, i;
    int peca;

    printf("Bem-vindo ao teste de estrutura de reptição!");
    printf("Selecione a peça a ser testada\n");
    printf("1. Torre\n");
    printf("2. Bispo\n");
    printf("3. Rainha\n");
    scanf("%d", &peca);

    switch (peca)
    {
    case 1:
        printf("Torre\n");
        for (i = 1; i <= 5; i++)
        {
            printf("%d direita\n", i);
        }
        
        break;

    case 2:
        printf("Bispo\n");
        printf("Entre com quantos movimentos a peça deverá fazer:\n");
        scanf("%d", &movimento);
        i = 1;
        while (i <= movimento)
        {
            printf("%d Cima, Direta\n", i);
            i++;
        }
        break;

    case 3:
        printf("Rainha\n");
        printf("Entre com quantos movimentos a peça deverá fazer:\n");
        scanf("%d", &movimento);
        i = 1;
        do
        {
            printf("%d Esquerda\n", i);
            i++;
        } while (i <= movimento);
        break;
        
    default:
        printf("Opção invalida!!\n");
        break;
    }

    return 0;
}

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
