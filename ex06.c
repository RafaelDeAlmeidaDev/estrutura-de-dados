#include <stdio.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL, "portuguese");

    int idade, meses, dias, horas, minutos;

    printf("Digite a sua idade aqui ");
    scanf("%d", &idade);

    meses = idade * 12;
    dias = meses * 30;
    horas = dias * 24;
    minutos = horas * 60;

    printf("Você tem %d anos, que aproximadamente %d meses, %d dias, %d minutos vivividos", idade, meses, dias, horas, minutos);
}
