#include<stdio.h>


main(){


    float reais, cotacaoDolar, valorConvertido;


    printf("Insira o valor em reais: ");
    scanf("%f", &reais);


    printf("Insira a cotacao do dolar");
    scanf("%f", &cotacaoDolar);


    valorConvertido = reais / cotacaoDolar;


    printf("O valor em dolar é:%f", valorConvertido);






}
