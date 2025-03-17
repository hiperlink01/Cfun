#include <stdio.h>

int check_perfect_number(int number){

    int sumCheck = 0;

    for (int i=1; i<number; i++){

        if ( number%i == 0 ) { sumCheck+=i; };

    }

    if ( sumCheck == number ) { return 1; }
    else { return 0; }

}

int main(){

    for (int number = 1; number <= 10000; number++){

        if (check_perfect_number(number)==1){

            printf("%d=", number);

            for (int factor = 1; factor < number; factor++ ){

                if (number%factor==0) {
                    
                    printf("%d", factor); 
                
                    if ( factor*2 != number ) { printf("+"); }
                    else { printf("\n"); }
                
                }   

            }

        }

    }

    return 0;

}