#include <stdio.h>
#include <locale.h>

void main()
{
    setlocale(LC_ALL, "portuguese");

    int valor1, valor2;

    printf("Passe o primeiro valor");
    scanf("%d", &valor1);

    printf("Passe o segundo valor");
    scanf("%d",&valor2);

    if(valor1 % valor2 == 0 || valor2 % valor1 == 0)
    {
        printf("S�o m�ltiplos");
    }
    else
    {
        printf("N�o s�o m�ltiplos");
    }
}
