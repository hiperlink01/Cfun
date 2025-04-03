#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int lexicompare(char str1[], char str2[]){

    if (strlen(str1)>strlen(str2)){

        for (int i=0; i<strlen(str2); i++){

            if (
                (str1[i] >= 'A' && str1[i] <= 'Z')
                &&
                (str2[i] >= 'A' && str2[i] <= 'Z')
            ){
                if (str1[i] > str2[i]){ return 1; }
                if (str1[i] < str2[i]){ return -1; }
            }
            
            if (
                (str1[i] >= 'A' && str1[i] <= 'Z')
                &&
                (str2[i] >= 'a' && str2[i] <= 'z')
            ){
                if (str1[i]+32 > str2[i]){ return 1; }
                if (str1[i]+32 < str2[i]){ return -1; }
            }

            if (
                (str1[i] >= 'a' && str1[i] <= 'z')
                &&
                (str2[i] >= 'A' && str2[i] <= 'Z')
            ){
                if (str1[i] > str2[i]+32){ return 1; }
                if (str1[i] < str2[i]+32){ return -1; }
            }

            if (
                (str1[i] >= 'a' && str1[i] <= 'z')
                &&
                (str2[i] >= 'a' && str2[i] <= 'z')
            ){
                if (str1[i] > str2[i]){ return 1; }
                if (str1[i] < str2[i]){ return -1; }
            }

        }

        return 1;

    }

    else if (strlen(str1) < strlen(str2)){

        for (int i=0; i<strlen(str1); i++){

            if (
                (str1[i] >= 'A' && str1[i] <= 'Z')
                &&
                (str2[i] >= 'A' && str2[i] <= 'Z')
            ){
                if (str1[i] > str2[i]){ return 1; }
                if (str1[i] < str2[i]){ return -1; }
            }
            
            if (
                (str1[i] >= 'A' && str1[i] <= 'Z')
                &&
                (str2[i] >= 'a' && str2[i] <= 'z')
            ){
                if (str1[i]+32 > str2[i]){ return 1; }
                if (str1[i]+32 < str2[i]){ return -1; }
            }

            if (
                (str1[i] >= 'a' && str1[i] <= 'z')
                &&
                (str2[i] >= 'A' && str2[i] <= 'Z')
            ){
                if (str1[i] > str2[i]+32){ return 1; }
                if (str1[i] < str2[i]+32){ return -1; }
            }

            if (
                (str1[i] >= 'a' && str1[i] <= 'z')
                &&
                (str2[i] >= 'a' && str2[i] <= 'z')
            ){
                if (str1[i] > str2[i]){ return 1; }
                if (str1[i] < str2[i]){ return -1; }
            }

        }

        return -1;

    }

    else if (strlen(str1) == strlen(str2)){

        for (int i=0; i<strlen(str1); i++){

            if (
                (str1[i] >= 'A' && str1[i] <= 'Z')
                &&
                (str2[i] >= 'A' && str2[i] <= 'Z')
            ){
                if (str1[i] > str2[i]){ return 1; }
                if (str1[i] < str2[i]){ return -1; }
            }
            
            if (
                (str1[i] >= 'A' && str1[i] <= 'Z')
                &&
                (str2[i] >= 'a' && str2[i] <= 'z')
            ){
                if (str1[i]+32 > str2[i]){ return 1; }
                if (str1[i]+32 < str2[i]){ return -1; }
            }

            if (
                (str1[i] >= 'a' && str1[i] <= 'z')
                &&
                (str2[i] >= 'A' && str2[i] <= 'Z')
            ){
                if (str1[i] > str2[i]+32){ return 1; }
                if (str1[i] < str2[i]+32){ return -1; }
            }

            if (
                (str1[i] >= 'a' && str1[i] <= 'z')
                &&
                (str2[i] >= 'a' && str2[i] <= 'z')
            ){
                if (str1[i] > str2[i]){ return 1; }
                if (str1[i] < str2[i]){ return -1; }
            }
        }

        return 0;

    }

}

int main(){

    char str1[13] = "HHello";
    char str2[13] = "Hello";

    printf("%d", lexicompare(str1, str2));

}