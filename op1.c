#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <time.h>


#define MAX_CHARACTER 200
#define MAX_NOTE 2
#define MAX_DATA 5

struct escola {
    char dataDeNascimento[MAX_CHARACTER];
    char nome[MAX_CHARACTER];
    float nota[MAX_NOTE];
    float mediaEscola;
};
void cabecalho ( ) {
    system ("cls || clear");
    printf ("Bem-Vindo ao DevSchool++\n\n");
}
float mediaFinal (float numero[]) {
    int i;
    float soma = 0, media;

    for (i = 0; i < MAX_NOTE; i++) {
        soma += numero[i];
    }
    return media = soma / (float) MAX_NOTE;
}
char* situacao (float mediaE) {
    char classe[MAX_CHARACTER];

    if (mediaE >= 7) {
        strcpy (classe, "Aprovado");
    
    } else {
        strcpy (classe, "Reprovado"); }
    
    return classe;
}
int main ( ) {
    setlocale (LC_ALL, "portuguese");

   

    int i, j;
    struct escola estudante[MAX_DATA];

 

    cabecalho ( );
    for (i = 0; i < MAX_DATA; i++) {
        printf ("Digite o nome do %dº estudante: ", i+1);
        gets (estudante[i].nome);
        printf ("Digite a data de nascimento do estudante (DD/MM/AAAA): ");
        gets (estudante[i].dataDeNascimento);

        for (j = 0; j < MAX_NOTE; j++) {
            do {
                printf ("Digite a %dª nota: ", j+1);
                scanf ("%f", &estudante[i].nota[j]);

                if (estudante[i].nota[j] < 0 || estudante[i].nota[j] > 10) {
                    printf ("\nNota Inválida (Nota válida entre 0 e 10)\n\n"); }

            } while (estudante[i].nota[j] < 0 || estudante[i].nota[j] > 10);
        }
        fflush (stdin);
        printf ("\n");
    
        estudante[i].mediaEscola = mediaFinal(estudante[i].nota);
    }


    cabecalho ( );
    for (i = 0; i < MAX_DATA; i++) {
        printf ("Nome do %dº estudante: %s\n\n", i+1, estudante[i].nome);
        printf ("Data de nascimento: %d\n", estudante[i].dataDeNascimento);

        for (j = 0; j < MAX_NOTE; j++) {
            printf ("%dª nota: %.2f\n", j+1, estudante[i].nota[j]);
        }
        printf ("Média: %.2f\n", estudante[i].mediaEscola);
        printf ("Situação: %s\n\n", situacao (estudante[i].mediaEscola));
    }

    return 0;
}