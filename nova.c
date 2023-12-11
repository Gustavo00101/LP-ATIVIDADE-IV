#include <stdio.h>
#include <string.h>
#define tamanho 3

struct Contato {
    char nome[200];
    char telefone[20];
    char email[200];
};

void cadastrar_contatos(struct Contato contatos[]) {
    int i;
    for ( i = 0; i < tamanho; i++) {
        printf("Digite o nome do contato %dº: ", i + 1);
        scanf("%s", contatos[i].nome);
        printf("Digite o telefone do contato %dº: ", i + 1);
        scanf("%s", contatos[i].telefone);
        printf("Digite o email do contato %dº: ", i + 1);
        scanf("%s", contatos[i].email);
    }
}

char* buscar_telefone(struct Contato contatos[], char nome[]) {
    int i;
    
    for ( i = 0; i < tamanho; i++) {
        if (strcmp(contatos[i].nome, nome) == 0) {
            return contatos[i].telefone;
        }
    }
    return NULL;
}

int main() {
    struct Contato contatos[tamanho];
    cadastrar_contatos(contatos);

    char nome[50];
    printf("Digite o nome do contato que deseja buscar: ");
    scanf("%s", nome);

    char* telefone = buscar_telefone(contatos, nome);
    if (telefone != NULL) {
        printf("O telefone de %s é %s.\n", nome, telefone);
    } else {
        printf("Não foi encontrado nenhum contato com o nome %s.\n", nome);
    }

    return 0;
}
