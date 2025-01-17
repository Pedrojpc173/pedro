#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define CLIENTE_BANCO 3 // Número de clientes

// Definição da estrutura para cadastro de clientes
typedef struct {
    char nome[50];
    int ano_do_nascimento;
    float renda_familiar;
    int score;
} Cliente;

int main() {
    Cliente clientes[CLIENTE_BANCO];
    int n;
    int ano_atual = 2025;

    // Entrada de dados dos clientes
    for (n = 0; n < CLIENTE_BANCO; n++) {
        printf("Cadastro do cliente %d:\n", n + 1);

        // Nome do cliente
        printf("Digite o nome completo do cliente: ");
        scanf(" %[^\n]", clientes[n].nome);

        // Ano de nascimento
        printf("Digite o ano de nascimento do cliente: ");
        scanf("%d", &clientes[n].ano_do_nascimento);

        // Verifica se o cliente é maior de 18 anos
        int idade = ano_atual - clientes[n].ano_do_nascimento;
        if (idade < 18) {
            printf("Cliente %s não pode fazer empréstimo (menor de idade).\n\n", clientes[n].nome);
            continue; // Passa para o próximo cliente
        }

        // Renda familiar
        printf("Digite a renda familiar do cliente: ");
        scanf("%f", &clientes[n].renda_familiar);

        // Verifica a renda familiar
        if (clientes[n].renda_familiar < 2000) {
            printf("Cliente %s não pode fazer empréstimo (renda insuficiente).\n\n", clientes[n].nome);
            continue;
        }

        // Score
        printf("Digite o score do cliente (0 a 1000): ");
        scanf("%d", &clientes[n].score);

        // Verifica o score
        if (clientes[n].score < 300) {
            printf("Cliente %s não pode fazer empréstimo (score insuficiente).\n\n", clientes[n].nome);
            continue;
        }

        // Aprovação e tipo de empréstimo
        if (clientes[n].score < 500) {
            printf("Cliente %s pode fazer empréstimos de baixo porte.\n", clientes[n].nome);
        } else if (clientes[n].score < 750) {
            printf("Cliente %s pode fazer empréstimos de médio porte.\n", clientes[n].nome);
        } else {
            printf("Cliente %s pode fazer empréstimos de alto porte.\n", clientes[n].nome);
        }

        printf("\n");
    }

    // Exibição dos resultados
    printf("\nResumo dos clientes cadastrados:\n");
    for (n = 0; n < CLIENTE_BANCO; n++) {
        printf("Cliente %d:\n", n + 1);
        printf("  Nome: %s\n", clientes[n].nome);
        printf("  Ano de nascimento: %d\n", clientes[n].ano_do_nascimento);
        printf("  Renda familiar: %.2f\n", clientes[n].renda_familiar);
        printf("  Score: %d\n", clientes[n].score);
        printf("\n");
    }

    return 0;
}

