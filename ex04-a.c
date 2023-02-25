#include <stdio.h>
#include <locale.h>
#include <math.h>

void main(){
    setlocale(LC_ALL, "portuguese");

    float numeroDecimal, parteInteira, parteDecimal;

    printf("Digite um número: ");
    scanf("%f", &numeroDecimal);

    parteDecimal = 0;
    parteInteira = 0;

    printf("Valor arredondado: %0.f", numeroDecimal);

    parteDecimal = modff(numeroDecimal, &parteInteira);

    printf("\n parte inteira: %.0f", parteInteira);
    printf("\n somente casas decimais: %f", parteDecimal);


}
