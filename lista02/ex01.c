#include <stdio.h>
#include <locale.h>

void main(){

    setlocale(LC_ALL, "portuguese");

    int valor1, valor2, valor3;

    printf("Digite o primeiro valor");
    scanf("%d", &valor1);

    printf("Digite o segundo valor");
    scanf("%d", &valor2);

    printf("Digite o terceiro valor");
    scanf("%d", &valor3);

    if(valor1 > valor2 && valor1 > valor3){
        printf("o n�mero %d � o maior", valor1);
    }else if(valor2 > valor1 && valor2 > valor3){
        printf("o n�mero %d � o maior", valor2);
    }else if(valor3 > valor1 && valor3 > valor2){
        printf("o n�mero %d � o maior", valor3);
    }else{
        printf("N�o h� n�mero maior, existem mais de um valor digitado com o mesmo valor");
    }
}
