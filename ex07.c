#include <stdio.h>
#include <locale.h>

void main(){

    setlocale(LC_ALL, "portuguese");

    float baseTriangulo, alturaTriangulo, areaTriangulo;

    printf("Digite o valor da base ");
    scanf("%f", &baseTriangulo);

    printf("Digite a altura do tri�ngulo ");
    scanf("%f", &alturaTriangulo);

    areaTriangulo = baseTriangulo * alturaTriangulo / 2;

    printf("\n A �rea do Tri�ngulo �: %f", areaTriangulo);
}
