#include <stdio.h> <string.h>

int check_palindrome(char*text){

    int stringLenght = strlen(text)-1;
    int stringJump = stringLenght-1;

    for (int i=0; i<stringLenght/2; i++){

        if (*(text+i) != *(text+stringJump-i)){
            
            return 0;

        }

    }

    return 1;

}

int main(){

    char text[100];
  
    printf("Insert text: ");
    fgets(text, 100, stdin);

    if (check_palindrome(text)==1){  printf("palindrome\n"); }
    else { printf("not palindrome\n"); }
    

    return 0;

}