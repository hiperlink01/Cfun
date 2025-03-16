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

long combination(long elements, long groupings){

    long result = 0;

    result = factorial(elements)/(factorial(groupings)*factorial(elements-groupings));

    return result;

}

int main(){

    long elements, groupings;

    printf("Insira uma quantidade de elementos: ");
    scanf("%ld", &elements);
    printf("Insira o agrupamento: ");
    scanf("%ld", &groupings);

    printf("\nO resultado da combinação é: %ld\n\n", combination(elements, groupings));

}