#include <stdio.h>

int string_lenght(char string[]){

    int qtt = 0;

    while (string[qtt]!= '\0' ){

        qtt++;

    }

    return qtt;

}

int main(){

    char string[13] = " ";

    printf("%d", string_lenght(string));

}