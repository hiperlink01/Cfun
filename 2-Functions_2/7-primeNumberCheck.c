#include <stdio.h>

int check_prime(int number){

    if (number<=1){ return 0; } //negativos, nulo e 1 não são primos

    else{
        
        for (int i = 2; i < number; i++) {
        
            if (number%i==0){ return 0; }
            //havendo algum número maior que 1, menor que ele mesmo, não é primo
        }
        
        return 1; //caso contrário, é primo

    }

}

int main(){

    int number = 0;

    printf("Insira um número inteiro para verificar se é primo: ");
    scanf("%d", &number);

    if ( check_prime(number)==1 ){ printf("É primo.\n"); }
    if ( check_prime(number)==0 ){ printf("Não é primo.\n"); }

}