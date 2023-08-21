#include<stdio.h>
main(){
    //operadores aritméticos- soma (+), subtração (-)
    //divisão (/) multiplicação (*) e modulo (%)
    //atenção a ordem de precedencia


    //escrever um algoritmo que realize uma subtração de dois numeros e apresente o resultado


    //passo 1- declarar variaveis
    //passo 2- receber os dados
    //passo 3- monta a operação de processamento (calculo)
    //passo 4- apresenta saída


   


    int num1, num2, resultadoSoma, resultadoSub, resultadoDiv, resultadoMult;


    printf("Digite o numero1");
    scanf("%d", &num1);
    printf("Digite o segundo numero");
    scanf("%d", &num2);
   
    //montar as operacoes:


    resultadoSoma = num1 + num2;
    resultadoSub = num1 - num2;
    resultadoMult = num1 * num2;
    resultadoDiv = (float)num1 / num2;
   
    //apresentacao dos resultados:


    printf("\nResultado soma: %d", resultadoSoma);
    printf("\nResultado subtracao:%d", resultadoSub);
    printf("\nResultado divisao;%d", resultadoDiv);
    printf("\nResultado multipicacao: %d", resultadoMult);




}


