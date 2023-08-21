#include <stdio.h>

int main() {
    float custoFabrica, percentualDistribuidor, percentualImpostos;

    // Definindo os percentuais do distribuidor e dos impostos
    percentualDistribuidor = 0.28;  // 28%
    percentualImpostos = 0.45;      // 45%

    // Leitura do custo de fábrica do carro
    printf("Digite o custo de fábrica do carro: ");
    scanf("%f", &custoFabrica);

    // Cálculo do custo final ao consumidor
    float custoFinal = custoFabrica + (custoFabrica * percentualDistribuidor) + (custoFabrica * percentualImpostos);

    // Exibição do resultado
    printf("O custo final ao consumidor é: %.2f\n", custoFinal);

    return 0;
}
