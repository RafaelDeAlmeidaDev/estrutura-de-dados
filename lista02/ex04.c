#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

void main()
{
    setlocale(LC_ALL, "portuguese");
    float valorTotal;
    int codigoProduto, quantidade;

    printf("Digite o código do produto");
    scanf("%d", &codigoProduto);

    printf("Digite a quantidade");
    scanf("%d", &quantidade);


    if(codigoProduto == 100)
    {
        valorTotal = 1.2 * quantidade;
        printf("O valor de %d Bauru simples é de : %.2f", quantidade, valorTotal);
    }
    else if(codigoProduto == 101)
    {
        valorTotal = 1.3 * quantidade;
        printf("O valor de %d Bauru simples é de : %.2f", quantidade, valorTotal);
    }
    else if(codigoProduto == 102)
    {
        valorTotal = 1.5 * quantidade;
        printf("O valor de %d Bauru com ovo é de : %.2f", quantidade, valorTotal);
    }
    else if(codigoProduto == 103)
    {
        valorTotal = 1.2 * quantidade;
        printf("O valor de %d Hambúrger é de : %f", quantidade, valorTotal);
    }
    else if(codigoProduto == 104)
    {
        valorTotal = 1.3 * quantidade;
        printf("O valor de %d Cheeseburguer é de : %f", quantidade, valorTotal);
    }
    else if(codigoProduto == 105)
    {
        valorTotal = 1 * quantidade;
        printf("O valor de %d refrigerante é de : %f", quantidade, valorTotal);
    }
    else
    {
        printf("Você não digitou um código válido");
    }


}
