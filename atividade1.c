#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

struct dados_contatos
{
    char nome[200];
    char telefone[200];
    char email[200];
};

void buscartelofonepelonome(struct dados_contatos contato[], char *contatodesejado)
{
    int i;

    for (i = 0; i < 3; i++)
    {
        if (strcmp(contato[i].nome, contatodesejado) == 0)
        {
            printf("Telefone de %s: %s \n", contato[i].nome, contato[i].telefone);
            return;
        }
    }
    printf("Contato não encontrado. \n");
}

int main()
{
    setlocale(LC_ALL, "portuguese");

    char contatodesejado[200];
    int i;

    struct dados_contatos contato[3];

    for (i = 0; i < 3; i++)
    {
        fflush(stdin);

        printf("\n");
        printf("Digite o nome do usuario: \n");
        gets(contato[i].nome);

        printf("Digite o telefone: \n");
        gets(contato[i].telefone);

        printf("Informe a email: \n");
        gets(contato[i].email);
    }

    printf("Digite o nome do contato que deseja buscar:");
    gets(contatodesejado);

    buscartelofonepelonome(contato, contatodesejado);

    return 0;
}