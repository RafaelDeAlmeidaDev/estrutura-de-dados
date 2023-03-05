#include <stdio.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL, "portuguese");

    float valorSalario, valorImposto;

    printf("Digite o valor do seu salário: ");
    scanf("%f", &valorSalario);

    valorImposto = valorSalario * 0.05;

    printf("Valor imposto a ser pago é de: %.2f\n", valorImposto);
    
}
