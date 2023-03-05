#include <stdio.h>
#include <locale.h>

void main()
{
	setlocale(LC_ALL, "portuguese");

	int i;
	float a, b, c;

	printf("1 para ordem crescente, 2 ordem decrescente, 3 para colocar o valor maior no meio ");
	scanf("%d", &i);

	printf("Digite o 1 valor ");
	scanf("%f", &a);
	printf("Digite o 2 valor ");
	scanf("%f", &b);
	printf("Digite os 3 valor ");
	scanf("%f", &c);
	

	if (i == 1)
	{
		if (a < b && a < c && b < c)

		{
			printf("%f, %f, %f\n", a, b, c);
		}
		else if (a < b && a < c && c < b)
		{
			printf("%f, %f, %f\n", a, c, b);
		}
		else if (b < a && b < c && c < a)
		{
			printf("%f, %f, %f\n", b, c, a);
		}
		else if (b < a && b < c && a < c)
		{
			printf("%f, %f, %f\n", b, a, c);
		}
		else if (c < a && c < b && b < a)
		{
			printf("%f, %f, %f\n", c, b, a);
		}
		else if (c < a && c < b && a < b)
		{
			printf("%f, %f, %f\n", c, a, b);
		}
	}
	else if (i == 2)
	{
		if (a > b && a > c && b > c)

		{
			printf("%f, %f, %f\n", a, b, c);
		}
		else if (a > b && a > c && c > b)
		{
			printf("%f, %f, %f\n", a, c, b);
		}
		else if (b > a && b > c && c > a)
		{
			printf("%f, %f, %f\n", b, c, a);
		}
		else if (b > a && b > c && a > c)
		{
			printf("%f, %f, %f\n", b, a, c);
		}
		else if (c > a && c > b && b > a)
		{
			printf("%f, %f, %f\n", c, b, a);
		}
		else if (c > a && c > b && a > b)
		{
			printf("%f, %f, %f\n", c, a, b);
		}
	}

	else if (i == 3)
	{
		if (a > b && a > c)
			printf("%f  %f  %f\n", b, a, c);
		else if (b > a && b > c)
			printf("%f  %f  %f\n", a, b, c);
		else
			printf("%f  %f  %f\n", a, c, b);
	}
	else
	{
		printf("Código inválido");
	}
}
