#include <stdio.h>
#include <string.h>

// Estrutura para armazenar os dados de uma cidade
struct Cidade {
    char estado[3];          // Código do estado (2 caracteres)
    char codigo[4];          // Código da carta (ex: A01)
    char nome[50];           // Nome da cidade
    int populacao;           // População
    float area;              // Área (em km²)
    float pib;               // PIB (em bilhões)
    int pontos_turisticos;   // Número de pontos turísticos
};

// Função para calcular a densidade populacional
float calcularDensidadePopulacional(struct Cidade cidade) {
    return cidade.populacao / cidade.area;
}

// Função para calcular o PIB per capita
float calcularPIBPerCapita(struct Cidade cidade) {
    return cidade.pib / cidade.populacao;
}

int main() {
    // Definição das duas cartas (exemplo)
    struct Cidade carta1, carta2;

    // Cadastro da primeira carta (São Paulo)
    strcpy(carta1.estado, "SP");
    strcpy(carta1.codigo, "A01");
    strcpy(carta1.nome, "São Paulo");
    carta1.populacao = 12300000;  // População fictícia
    carta1.area = 1500.5;         // Área fictícia em km²
    carta1.pib = 700.5;           // PIB fictício em bilhões
    carta1.pontos_turisticos = 50;

    // Cadastro da segunda carta (Rio de Janeiro)
    strcpy(carta2.estado, "RJ");
    strcpy(carta2.codigo, "B02");
    strcpy(carta2.nome, "Rio de Janeiro");
    carta2.populacao = 6000000;   // População fictícia
    carta2.area = 1200.3;         // Área fictícia em km²
    carta2.pib = 350.2;           // PIB fictício em bilhões
    carta2.pontos_turisticos = 30;

    // Cálculos de Densidade Populacional e PIB per Capita
    float densidade1 = calcularDensidadePopulacional(carta1);
    float densidade2 = calcularDensidadePopulacional(carta2);
    float pibPerCapita1 = calcularPIBPerCapita(carta1);
    float pibPerCapita2 = calcularPIBPerCapita(carta2);

    // Comparação de População
    printf("Comparação de cartas (Atributo: População):\n");
    printf("Carta 1 - %s (%s): %d\n", carta1.nome, carta1.estado, carta1.populacao);
    printf("Carta 2 - %s (%s): %d\n", carta2.nome, carta2.estado, carta2.populacao);

    // Verificando qual carta tem a maior população
    if (carta1.populacao > carta2.populacao) {
        printf("Resultado: Carta 1 (%s) venceu!\n", carta1.nome);
    } else {
        printf("Resultado: Carta 2 (%s) venceu!\n", carta2.nome);
    }

    // Comparação de Densidade Populacional
    printf("\nComparação de Densidade Populacional:\n");
    printf("Carta 1 - %s: %.2f habitantes/km²\n", carta1.nome, densidade1);
    printf("Carta 2 - %s: %.2f habitantes/km²\n", carta2.nome, densidade2);

    // Verificando qual carta tem a menor densidade populacional
    if (densidade1 < densidade2) {
        printf("Resultado: Carta 1 (%s) venceu!\n", carta1.nome);
    } else {
        printf("Resultado: Carta 2 (%s) venceu!\n", carta2.nome);
    }

    // Comparação de PIB per capita
    printf("\nComparação de PIB per capita:\n");
    printf("Carta 1 - %s: %.2f bilhões por pessoa\n", carta1.nome, pibPerCapita1);
    printf("Carta 2 - %s: %.2f bilhões por pessoa\n", carta2.nome, pibPerCapita2);

    // Verificando qual carta tem o maior PIB per capita
    if (pibPerCapita1 > pibPerCapita2) {
        printf("Resultado: Carta 1 (%s) venceu!\n", carta1.nome);
    } else {
        printf("Resultado: Carta 2 (%s) venceu!\n", carta2.nome);
    }

    return 0;
}