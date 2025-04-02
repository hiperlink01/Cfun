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

int classify_char_scvogal(char letter){

    switch (letter){
    
      case 'a':case 'e':case 'i':case 'o':case 'u':
        return 1;
      default:
        return 0;
  
    }
  
}

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

char* to_upper_case(char original_str[], int len_original_str){

    char* result_str = (char*) malloc(sizeof(char)*len_original_str);

    for (int i; i<len_original_str; i++){
            
        if (original_str[i] >= 'a' && original_str[i] <= 'z'){

            result_str[i] = original_str[i] - 32;

        }
        else {

            result_str[i] = original_str[i];

        }

    }

    return result_str;
    
}

void caixa_com_texto_centralizado(char S[], int N, char C){

    for (int i = 0; i<3; i++){
        for (int j = 0; j<N; j++){
            if (i == 0 || i == 2){
                printf("%c", C);
            }
            else {
                if (j==0 || j==N-1){
                    printf("%c", C);
                }
                else {
                    if (strlen(S) < N && j >= (N-strlen(S))/2 && j <= (N-strlen(S))/2){

                        printf(" ");

                    }

                }
            }
        }
    }

}