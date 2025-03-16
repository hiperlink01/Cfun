#include <stdio.h>

int classify_char_consonant(char letter){

  switch (letter){
  
    case 'a':case 'e':case 'i':case 'o':case 'u':
      return 1;
    default:
      return 0;

  }

}

int main(){

  char letter;
  
  printf("Insert ONE character: ");
  scanf("%c", &letter);
  
  if (classify_char_consonant(letter)==1){  printf("small caps vogal\n"); }
  else { printf("not small caps vogal\n"); }

  return 0;
}