#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

#define TAM 100

struct dados_funcionarios
{
    char nome[200], cargo[200];
    float salario;
};

float media(struct dados_funcionarios funcionario[])
{
    int i;
    int j;
    float soma;
    float resultado;

    for (j = 0; j < TAM; j++)
    {
        if (strcmp(funcionario[i].cargo, "Perita Criminal") == 0)
        {
            j++;
            soma += funcionario[i].salario;
        }
    }
    resultado = soma / (float)j;
    return resultado;
}

int main()
{

    int opcao, i;

    struct dados_funcionarios funcionarios[TAM];

    do
    {

        printf("   |   Seja Bem Vindo\t\n");
        printf(" 1 | Adicionar Funcionario\n");
        printf(" 2 | Exibir Media Salarial\n");
        printf(" 3 | Sair do programa\n");
        printf("-------------------------\n");

        printf("\n\n");
        printf("Selecione a opcao desejada: ");
        scanf("%d", &opcao);
        system("cls||clear");

        switch (opcao)
        {
        case 1:
            fflush(stdin);

            printf("Digite o nome do %d� funcionario: ", i + 1);
            gets(funcionarios[i].nome);

            printf("Digite o nome do cargo: ");
            gets(funcionarios[i].cargo);

            printf("Digite o valor do salario: ");
            scanf("%f", &funcionarios[i].salario);

            system("cls||clear");

            break;
        case 2:
            printf("Media salarial: R$ %.2f\n\n", media(funcionarios));
            break;
        }

    } while (opcao != 0);

    return 0;
}