#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int string_lenght(char* string){

    int qtt = 0;

    while (string[qtt]!= '\0' ){

        qtt++;

    }

    return qtt;

}

char* remove_blank(char* original_string){

    int len_original_str = string_lenght(original_string);
    int count_before = 0;
    int count_after = 0;

    for (int i=0; original_string[i]==' '; i++){

        count_before++;
        
    }

    for (int i = len_original_str-1; original_string[i]==' '; i--){

        count_after++;
        
    }

    if (
        len_original_str == count_before 
        && 
        len_original_str == count_after
    ) {   
        char* new_string = (char*) malloc(sizeof(char));
        new_string[0] = '\0';
        return new_string;
    }

    else {

        int len_new_str = len_original_str - count_before - count_after;

        char* new_string = (char*) malloc(sizeof(char) * (len_new_str+1));
        
        for (int i = count_before, j=0; i < len_original_str - count_after; i++, j++) {
            
            new_string[j] = original_string[i];

        }

        new_string[len_new_str] = '\0';

        return new_string;

    }


}

int main(){

    char* string = "                               ";

    string = remove_blank(string);

    for (int i = 0; i < string_lenght(string); i++){ printf("%c", string[i]);}

}