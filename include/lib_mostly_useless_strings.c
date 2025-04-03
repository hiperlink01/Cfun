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

int string_lenght(char string[]){

    int qtt = 0;

    while (string[qtt]!= '\0' ){

        qtt++;

    }

    return qtt;

}

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