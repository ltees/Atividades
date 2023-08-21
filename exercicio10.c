#include <stdio.h>

int main() {
    int numCarrosVendidos;
    float valorVendas, salarioFixo, valorPorCarro, salarioFinal;

    // Leitura dos dados
    printf("Digite o número de carros vendidos: ");
    scanf("%d", &numCarrosVendidos);

    printf("Digite o valor total de vendas: ");
    scanf("%f", &valorVendas);

    printf("Digite o salário fixo: ");
    scanf("%f", &salarioFixo);

    printf("Digite o valor por carro vendido: ");
    scanf("%f", &valorPorCarro);

    // Cálculo do salário final
    salarioFinal = salarioFixo + (numCarrosVendidos * valorPorCarro) + (valorVendas * 0.05);

    // Exibição do resultado
    printf("O salário final do vendedor é: %.2f\n", salarioFinal);

    return 0;
}

