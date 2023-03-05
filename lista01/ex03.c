#include <stdio.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL, "portuguese");

    float valorDeposito, taxaJuros, calculo;

    printf("Valor do depósito ");
    scanf("%f", &valorDeposito);

    printf("Valor da taxa de juros");
    scanf("%f", &taxaJuros);

    calculo = valorDeposito * (taxaJuros/100);

    printf("Teve um rendimento de: %f", calculo);


}

//resolver o cálculo

