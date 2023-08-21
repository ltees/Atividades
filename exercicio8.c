#include <stdio.h>

int main() {
    float salarioAtual, percentualReajuste;

    // Leitura do salário atual e do percentual de reajuste
    printf("Digite o salário atual do funcionário: ");
    scanf("%f", &salarioAtual);

    printf("Digite o percentual de reajuste: ");
    scanf("%f", &percentualReajuste);

    // Cálculo do novo salário
    float novoSalario = salarioAtual + (salarioAtual * percentualReajuste / 100);

    // Exibição do resultado
    printf("O novo salário é: %.2f\n", novoSalario);

    return 0;
}
