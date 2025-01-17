#include <stdio.h>

#define NUM_ALUNOS 4

// Definição da estrutura para armazenar os dados do aluno
typedef struct {
    char nome[50];    // Nome do aluno
    float notas[3];   // Array para armazenar as 3 notas
    float media;      // Média das 3 notas
} Aluno;

int main() {
    Aluno alunos[NUM_ALUNOS]; // Array para 4 alunos
    int i, j;

    // Entrada de dados dos alunos
    for (i = 0; i < NUM_ALUNOS; i++) {
        printf("Digite o nome do aluno %d: ", i + 1);
        scanf(" %[^\n]", alunos[i].nome); // Lê o nome do aluno, incluindo espaços

        float soma = 0.0; // Variável para somar as notas
        for (j = 0; j < 3; j++) {
            printf("Digite a nota %d do aluno %s: ", j + 1, alunos[i].nome);
            scanf("%f", &alunos[i].notas[j]);
            soma += alunos[i].notas[j]; // Acumula as notas
        }

        alunos[i].media = soma / 3.0; // Calcula a média
        printf("\n");
        if (alunos[i].media <2){
            printf("voce esta reprovado",alunos[i].media);
        }else{
            if(alunos[i].media >2&& alunos[i].media<=5){
                printf("voce esta de recuparação",alunos[i].media);
            }else{
                printf("voce esta aprovado",alunos[i].media);
            }
        }

    }

    // Exibição dos dados dos alunos
    printf("\nDados dos alunos:\n");
    for (i = 0; i < NUM_ALUNOS; i++) {
        printf("Aluno: %s\n", alunos[i].nome);
        for (j = 0; j < 3; j++) {
            printf("  Nota %d: %.2f\n", j + 1, alunos[i].notas[j]);
        }
        printf("  Média final: %.2f\n\n", alunos[i].media);
    }

    return 0;
}
