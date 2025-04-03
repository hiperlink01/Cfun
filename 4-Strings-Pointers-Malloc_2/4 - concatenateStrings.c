#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* strconcat(char first_str[], char second_str[]){

    int concat_len = strlen(first_str) + strlen(second_str);

    char* concat_str = (char*) malloc(sizeof(char)*concat_len+1);

    for (int i=0; i<concat_len; i++){

        if (i < strlen(first_str)){
            concat_str[i] = first_str[i];
        }
        if (i >= strlen(first_str)){
            concat_str[i] = second_str[i-strlen(first_str)];
        }
    }    

    concat_str[concat_len] = '\0';

    return concat_str;
}

int main(){

    char str1[7] = "Hello ", str2[7] = "World!";
    char* concatenation;

    concatenation = strconcat(str1, str2);

    for (int i = 0; i< strlen(str1)+strlen(str2); i++){

        printf("%c", concatenation[i]);

    }

    printf("\n\n");

    
}