#include <stdio.h>
#include <locale.h>


void main(){

    setlocale(LC_ALL, "portuguese");

    float nota1, nota2, nota3, media;

    printf("Digite a primeira nota ");
    scanf("%f", &nota1);

    printf("\nDigite a segunda nota ");
    scanf("%f", &nota2);

    printf("\nDigite a terceira nota ");
    scanf("%f", &nota3);

    media = (nota1 + nota2 + nota3) / 3;

    printf("(%f + %f + %f) / 3 : %f", nota1, nota2, nota3, media);

}
