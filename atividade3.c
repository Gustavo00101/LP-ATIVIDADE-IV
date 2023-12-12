#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

struct dados_produtos
{
    int quantidade;
    float preco;
    char nome[300];
};

void cabecalho()
{
    system("cls || clear");
    printf("Seja bem vindo ao programa de estoque!\n\n");
}

int dados_produtos(int quantidade)
{
    int dados_estoque = 100;
    return dados_estoque -= quantidade;
}

float dados_estoque(float dinheiro, float cifra)
{
    return dinheiro * cifra;
}

int main()
{
    setlocale(LC_ALL, "portuguese");

    // Variáveis
    int opcao, quantidade;
    float estoque;
    struct dados_produtos produto;

    // Comandos

    do
    {
        cabecalho();
        printf("-----Selecione sua preferencia-----\t\n");
        printf("   1   | Realizar uma compra\n");
        printf("   2   | Consultar estoque\n");
        printf("   3   | Sair do programa\n");
        printf("-----------------------------------");

        printf("\n\n");
        printf("Selecione a opção desejada: ");
        scanf("%d", &opcao);

        switch (opcao)
        {
        case 1:
            fflush(stdin);
            printf("\nDigite o nome do produto: ");
            gets(produto.nome);
            printf("Digite a quantidade adquirida: ");
            scanf("%d", &produto.quantidade);
            printf("Digite o valor do produto: ");
            scanf("%f", &produto.preco);



            quantidade = dados_produtos(produto.quantidade);
            estoque = dados_estoque(produto.preco, produto.quantidade);
            break;



        case 2:

            cabecalho();
            printf("Nome do produto: %s\n", produto.nome);
            printf("Quantidade no estoque: %d\n", quantidade);
            printf("Valor do estoque em produtos: R$ %.2f\n", estoque);
            system("pause");
            break;


        case 3:
            cabecalho();
            printf("Encerrando Programa!");
            break;
            }

    } while (opcao != 3);

    return 0;
}