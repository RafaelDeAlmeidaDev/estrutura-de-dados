#include <stdio.h>
#include <locale.h>

void main(){
    int idadeNadador;

    printf("Digite a idade do nadador ");
    scanf("%d", &idadeNadador);

    if(idadeNadador >= 5 && idadeNadador <=7){
        printf("categoria infantil A");
    }
    else if(idadeNadador >= 8 && idadeNadador <=10){
        printf("categoria infantil B");
    }
    else if(idadeNadador >= 11 && idadeNadador <=13){
        printf("categoria juvenil A");
    }
    else if(idadeNadador >= 14 && idadeNadador <=17){
        printf("categoria juvenil B");
    }else if(idadeNadador >= 18){
        printf("categoria adulta");

    }else{
        printf(" Não entra em nenhuma categoria");
    }
}
