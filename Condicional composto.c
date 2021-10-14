/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int idade = 0;
    printf("digite sua idade\n");
    
    scanf("%d",&idade);
    
    printf("sua idade é %d\2",idade);
     if(idade>18){
         printf("\nvocê é maior de idade");
     } else{
         printf("\nvocê é menor de idade");
     }

    return 0;
}
