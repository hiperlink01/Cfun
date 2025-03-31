#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* to_lower_case(char original_str[], int len_original_str){

    char* result_str = (char*) malloc(sizeof(char)*len_original_str);

    for (int i; i<len_original_str; i++){
            
        if (original_str[i] >= 'A' && original_str[i] <= 'Z'){

            result_str[i] = original_str[i] + 32;

        }
        else {

            result_str[i] = original_str[i];

        }

    }

    return result_str;
    
}

int main(){

    char original_str[100], *aux_string, *result_str;

    printf("Escreva seu texto: \n\n");
    scanf("%s", original_str);

    int len_original_str = strlen(original_str);

    aux_string = (char*) malloc(sizeof(char) * len_original_str);

    for (int i = 0; i < len_original_str; i++) {
        
        aux_string[i] = original_str[i];

    }

    result_str = to_lower_case(aux_string, len_original_str);

    for (int i = 0; i < len_original_str; i++) {
        
        printf("%c", result_str[i]);

    }
    

}