#include<stdio.h>


main(){


    float comprimento, largura, area;


    printf("Digite o comprimento da sala:");
    scanf("%f", &comprimento);


    printf("Digite a largura da sala:");
    scanf("%f", &largura);


    area = largura * comprimento;


    printf("A area da sala é: %2fm2", area);


}
