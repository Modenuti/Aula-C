/******************************************************************************
Criar um algoritmo que leia 2 números. Caso o primeiro número lido seja maior que o segundo,
imprima na tela o primeiro número menos o segundo, caso contrário mostre a soma dos dois números.
*******************************************************************************/

#include <stdio.h>

int main(){
    //declarando variaveis
    float N1 = 0,
          N2 = 0,
          resultado =0;
    //entrada de dados
    printf("digite dois números");
    printf("\ndigite o primeiro");
    scanf("%f",&N1);
    printf("\ndigite o segundo");
    scanf("%f",&N2);
    //processamento
    if(N1>N2){
        resultado = N1 - N2 ;
    }else{
        resultado = N1 + N2 ;
    }
    printf("\nO resultado é %.2f",resultado);
    return 0;}
