#include <stdio.h>

int integer_pow(int base, int power){

    int result = 1;

    for (int i=0; i<power; i++){ result = result*base; }

    return result;

}

int integer_log(int base, int logarithmand){

    int result = 1;

    for (int i=0; integer_pow(base, i) <= logarithmand; i++){ 
        
        if (logarithmand == integer_pow(base, i)) { result = i; }
    
    }

    return result;

}

int main(){

    int base, logarithmand;

    printf("PS.: O programa somente lida com logaritmos inteiros.\n\n");
    printf("Insira a base da logaritmação: ");
    scanf("%d", &base);
    printf("Insira o logaritmando: ");
    scanf("%d", &logarithmand);

    printf("O logaritmo é: %d", integer_log(base, logarithmand));

}