#include <stdio.h>
#include <math.h>
#include <tgmath.h>
#include <locale.h>

void main(){

    setlocale(LC_ALL, "portuguese");
    int numero, raizQuadrada, elevadoAoQuadrado;

    printf("Digite um número \n");
    scanf("%d", &numero);

    raizQuadrada = sqrt(numero);
    elevadoAoQuadrado = pow(numero, 2);

    printf("A Raiz quadrada do número %d é %d e %d elevado ao quadrado é: %d", numero, raizQuadrada, numero, elevadoAoQuadrado);
}
