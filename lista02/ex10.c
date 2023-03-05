#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    int idade, meses, anos;

    printf("Digite a idade em dias: ");
    scanf("%d", &idade);

    meses = idade /  30;
    anos = idade / 365;

    printf("Você tem %d meses de vida =  %d de anos = %d dias de vida: ", meses, anos, idade);

}