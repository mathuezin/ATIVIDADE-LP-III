#include <stdio.h>
#include <stdlib.h>

int main()
{
    int max_vendas = 100; // Número máximo de vendas
    char nome[max_vendas][200];
    int valor[max_vendas];
    int quantidade[max_vendas];
    int opcao, total_vendas = 0;

    do
    {
        system("cls");

        printf("MENU:\n");
        printf("1: Adicionar uma venda\n");
        printf("2: Sair e mostrar total de vendas\n");
        scanf("%d", &opcao);

        switch (opcao)
        {
        case 1:
            if (total_vendas < max_vendas)
            {
                printf("Digite o nome do produto: ");
                scanf("%s", nome[total_vendas]);

                printf("Digite o valor do produto: ");
                scanf("%d", &valor[total_vendas]);

                printf("Digite a quantidade do produto: ");
                scanf("%d", &quantidade[total_vendas]);

                total_vendas++;
            }
            else
            {
                printf("Limite máximo de vendas atingido!\n");
            }
            break;

        case 2:
            // Sair do loop
            break;

        default:
            printf("Opção inválida. Tente novamente.\n");
        }

    } while (opcao != 2);

    system("cls");

    printf("<----------- Mostrando Dados ------------>\n");

    for (int i = 0; i < total_vendas; i++)
    {
        printf("Venda %d:\n", i + 1);
        printf("Nome: %s\n", nome[i]);
        printf("Valor: %d\n", valor[i]);
        printf("Quantidade: %d\n", quantidade[i]);
        printf("<----------------------->\n");
    }

    printf("TOTAL DE VENDAS: %d\n", total_vendas);

    return 0;
}
