#include <stdio.h>
#include <locale.h>

void main(){

    setlocale(LC_ALL, "portuguese");

    float valorBaseMaior, valorBaseMenor, valorAltura, areaTrapezio;

    printf("Digite o Valor Base Maior: ");
    scanf("%f", &valorBaseMaior);

    printf("Digite o Valor Base Menor: ");
    scanf("%f", &valorBaseMenor);

    printf("Digite o Valor Altura: ");
    scanf("%f", &valorAltura);

    areaTrapezio = ((valorBaseMenor + valorBaseMaior) * valorAltura) / 2;


    printf("O valor da área do trapézio é de: %.2f", areaTrapezio);

}
