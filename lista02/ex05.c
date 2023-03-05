#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

void main()
{
    setlocale(LC_ALL, "portuguese");
    char genero;
    float altura, pesoIdeal;

    printf("Digite sua altura ");
    scanf("%f", &altura);

    printf("Digite seu gênero, F para feminino e M para masculino");
    scanf("%c", &genero);

    if(genero == "F"|| genero == "f")
    {
        pesoIdeal = (72.7* altura) - 58.0;
        printf("O peso ideal é de: %f", pesoIdeal);
    }
    else if(genero == "M"|| genero == "m")
    {
        pesoIdeal = (62.1 * altura) -44.7;
        printf("O peso ideal é de: %f", pesoIdeal);
    }
    else
    {
        printf("Você digitou algo errado");
    }



}
