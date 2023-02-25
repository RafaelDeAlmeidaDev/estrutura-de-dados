#include <stdio.h>
#include <locale.h>
#include <math.h>

void main(){
    setlocale(LC_ALL, "portuguese");

    int valor1, valor2, calculo;
    float valor1ComDecimal, valor2ComDecimal, calculoComDecimal;

    printf("Digite o primeiro valor ");
    scanf("%f", &valor1ComDecimal);

    printf("\n Digite o segundo valor ");
    scanf("%f", &valor2ComDecimal);

    valor1 = valor1ComDecimal;
    valor2 = valor2ComDecimal;

    calculo = valor1 + valor2;
    printf("%d + %d = %d", valor1, valor2, calculo);

    calculo = valor1 - valor2;
    printf("\n %d - %d = %d \n", valor1, valor2, calculo);

    calculo = valor1 * valor2;
    printf("\n %d X %d = %d \n", valor1, valor2, calculo);

    calculoComDecimal = valor1ComDecimal / valor2ComDecimal;
    printf("\n %f / %f = %f \n", valor1ComDecimal, valor2ComDecimal, calculoComDecimal);//converter o valor da variáveis

    calculoComDecimal = valor2ComDecimal / valor1ComDecimal;
    printf("\n %f / %f = %f \n", valor2ComDecimal, valor1ComDecimal, calculoComDecimal);// converter o tipo também

    calculo = valor1 / valor2;
    printf("\n %d / %d = %d \n", valor1, valor2, calculo);

    calculo = valor2 / valor1;
    printf("\n %d / %d = %d \n", valor2, valor1, calculo);

    calculo = valor1 % valor2;
    printf("\n O resto da divisão: %d / %d é: %d \n", valor1, valor2, calculo);

    calculo = valor2 % valor1;
    printf("\n O resto da divisão: %d / %d é: %d \n", valor2, valor1, calculo);

}
