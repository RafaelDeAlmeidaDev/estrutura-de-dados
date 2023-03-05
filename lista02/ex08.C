#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "portuguese");

    int a, b, c;

    printf("Digite o primeiro valor:\n");
    scanf("%d", &a);
    
    printf("Digite o segundo valor:\n");
    scanf("%d", &b);

    printf("Digite o terceiro valor:\n");
    scanf("%d", &c);

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