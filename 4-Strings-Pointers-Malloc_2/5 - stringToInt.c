#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int cast_to_int(char char_number){

    int number = char_number-'0';

    return number;
}

long long int pow_of_int(int base, int power){

    long long int result = 1;

    for (int i=0; i<power; i++){ result = result*base; }

    return result;

}

long long int string_to_int (char string[]){

    for (int i = 0; i < strlen(string); i++){

        if( string[i] < '0' || string[i] > '9'){

            printf("BAD PARAMETERS\n\n");
            return 0;

        }

    }

    int digits_qtt = strlen(string);

    long long int digits_generator = pow_of_int(10, digits_qtt-1);
    
    long long int result = 0;

    for (int i = 0; i < digits_qtt; i++){

        result = result + digits_generator * cast_to_int(string[i]);

        digits_generator = digits_generator / 10;

    }

    return result;

}

int main(){

    printf("%lld", string_to_int("4321") + string_to_int("1234"));

}