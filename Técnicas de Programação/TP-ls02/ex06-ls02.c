#include <stdio.h>

long factorial(long base){

    if (base < 0 ) { return 0; }
    if (base == 0){ return 1; }
    if (base > 0 ) {
    
        long result = base;

        for (long i = base-1; i>0; i-=1){ result = result*i; }

        return result;
    
    }
}

int main(){

    long base;
    
    printf("Insira um número para calcular seu fatorial: ");
    scanf("%ld", &base);

    if (factorial(base)==0){ printf("Entrada inválida.\n\n"); }
    else { printf("O resultado é: %ld\n\n", factorial(base)); }

}