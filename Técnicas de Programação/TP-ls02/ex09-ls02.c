#include <stdio.h>

int regular_check(int number){

    if (number<=1){ return 0; } //negativos, nulo e 1 não são primos

    else{
        
        for (int i = 1; i <= number; i++) {
        
            if ((i==2 || i== 3 || i==5) && number%i==0){ 
            
                do { number = number/i; } while (number%i==0);

            } // se o contador estiver em 2, 3, ou 5, e puder dividir o número, dividirá (...)
        }     // (...) até não haver mais divisão inteira
        
        if (number == 1){ return 1; } //se as continuas divisões resultarem em 1 no final, é regular
        else { return 0; } // senão, não é regular

    }

}

int main(){

    int number;

    printf("Insira um número para descobrir se é regular: ");
    scanf("%d", &number);

    if (regular_check(number) == 1) { printf("\nÉ regular.\n\n"); }
    else { printf("\nNão é regular.\n\n"); }

}