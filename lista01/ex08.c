#include <stdio.h>
#include <locale.h>
#define PI 3.14

void main(){
    setlocale(LC_ALL, "portuguese");

    float valorRaio, areaCirculo;

    printf("Digite o valor do raio do circulo ");
    scanf("%f", &valorRaio);

    areaCirculo = (valorRaio * valorRaio) * PI;

    printf("A àrea do círculo é : %.2f", areaCirculo);
}
