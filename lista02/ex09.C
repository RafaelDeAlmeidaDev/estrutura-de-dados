#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    float idade, meses, anos, dias, totalDeDias;

    printf("DIgite sua idade \n");
    scanf("%f", &idade);

    printf("quantos meses se passarama depois do seu aniversário\n");
    scanf("%f", &meses);

    printf("quantos dias se passarama depois do dias do mês do seu aniversário \n");
    scanf("%f", &dias);

    totalDeDias = (meses * 30) + (idade * 365) + dias;

    printf("Total de %f dias\n", totalDeDias);
}