#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

void main()[
	setlocale(LC_ALL, "portuguese");

	int codigoProduto, quantidadeProduto;
	float valorTotal;

	printf("Digite o código do produto");
    scanf("%d", &codigoProduto);

    printf("Digite a quantidade");
    scanf("%d", &quantidadeProduto);


    if(codigoProduto == 1001)
    {
        valorTotal = 5.32 * quantidadeProduto;
        printf("O valor s é de : %.2f", quantidadeProduto, valorTotal);
    }
    else if(codigoProduto == 1324)
    {
        valorTotal = 6.45 * quantidadeProduto;
        printf("O valor s é de : %.2f", quantidadeProduto, valorTotal);
    }
    else if(codigoProduto == 6548)
    {
        valorTotal = 2.37 * quantidadeProduto;
        printf("O valor s é de : %.2f", quantidadeProduto, valorTotal);
    }
    else if(codigoProduto == 0987)
    {
        valorTotal = 5.32 * quantidadeProduto;
        printf("O valor s é de : %.2f", quantidadeProduto, valorTotal);
    }
    else if(codigoProduto == 7683)
    {
        valorTotal = 6.45 * quantidadeProduto;
        printf("O valor s é de : %.2f", quantidadeProduto, valorTotal);
    }
    else
    {
        printf("Você não digitou um código válido");
    }
]
