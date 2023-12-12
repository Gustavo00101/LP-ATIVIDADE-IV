#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

struct dados_alunos
{
    char dataDeNascimento[250];
    char nome[200];
    float nota[5];
    float media;
};

void titulo()
{
    system("cls || clear");
    printf("Programa Aprovado/Reprovado\n");
}

float calcularMedia(float numero[])
{
    int i;
    float soma = 0, media;

    for (i = 0; i < 2; i++)
    {
        soma += numero[i];
    }
    return media = soma / 2;
}

char *conceito(float valor)
{
    char turma[250];

    if (valor >= 7)
    {
        strcpy(turma, "Aprovado!!");
    }
    else
    {
        strcpy(turma, "Reprovado!!");
    }

    return turma;
}

int main()
{
    setlocale(LC_ALL, "portuguese");

    // Vari�veis

    int i, j;
    struct dados_alunos aluno[5];

    // Comandos

    titulo();
    printf("\n");
    for (i = 0; i < 5; i++)
    {
        printf("Nome do %dº aluno: ", i + 1);
        gets(aluno[i].nome);
        printf("Data de nascimento: ");
        gets(aluno[i].dataDeNascimento);

        for (j = 0; j < 2; j++)
        {
            do
            {
                printf("Digite a %dº nota: ", j + 1);
                scanf("%f", &aluno[i].nota[j]);

                if (aluno[i].nota[j] < 0 || aluno[i].nota[j] > 10)
                {
                    printf("Nota inválida!\n");
                }

            } while (aluno[i].nota[j] < 0 || aluno[i].nota[j] > 10);
        }
        fflush(stdin);
        printf("\n");

        aluno[i].media = calcularMedia(aluno[i].nota);
    }

    titulo();
    printf("\n");
    for (i = 0; i < 5; i++)
    {
        printf("Nome do %dº aluno: %s\n", i + 1, aluno[i].nome);
        printf("Data de nascimento: %s\n", aluno[i].dataDeNascimento);
        for (j = 0; j < 2; j++)
        {
            printf("%dº nota: %.2f\n", j + 1, aluno[i].nota[j]);
        }
        printf("Média: %.2f\n", aluno[i].media);
        printf("%s\n\n", conceito(aluno[i].media));
    }

    return 0;
}