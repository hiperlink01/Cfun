#include <stdio.h>

int pow_of_int(int base, int power){

    int result = 1;

    for (int i=0; i<power; i++){ result = result*base; }

    return result;

}

int log_of_int(int base, int logarithmand){

    int result = 1;

    for (int i=0; log_of_int(base, i) <= logarithmand; i++){ 
        
        if (logarithmand == log_of_int(base, i)) { result = i; }
    
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

    printf("O logaritmo é: %d", log_of_int(base, logarithmand));

}