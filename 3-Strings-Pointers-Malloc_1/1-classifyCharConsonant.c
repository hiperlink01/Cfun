#include <stdio.h>

int classify_char_consonant(char letter){

  switch (letter){
  
    case 'b':case 'c':case 'd':case 'f':case 'g':case 'h':
    case 'j':case 'k':case 'l':case 'm':case 'n':
    case 'p':case 'q':case 'r':case 's':case 't':
    case 'v':case 'w':case 'x':case 'y':case 'z':
    case 'B':case 'C':case 'D':case 'F':case 'G':case 'H':
    case 'J':case 'K':case 'L':case 'M':case 'N':
    case 'P':case 'Q':case 'R':case 'S':case 'T':
    case 'V':case 'W':case 'X':case 'Y':case 'Z':
      return 1;
    default:
      return 0;

  }

}

int main(){

  char letter;
  
  printf("Insert ONE character: ");
  scanf("%c", &letter);
  
  if (classify_char_consonant(letter)==1){  printf("consonant\n"); }
  else { printf("not a consonant\n"); }

  return 0;
}
