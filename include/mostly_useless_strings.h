#ifndef U_STRINGS
#define U_STRINGS

int classify_char_consonant(char letter);

int classify_char_scvogal(char letter);

int check_palindrome(char*text);

char* to_lower_case(char original_str[], int len_original_str);

char* to_upper_case(char original_str[], int len_original_str);

int string_lenght(char string[]);

char* strconcat(char first_str[], char second_str[]);

long long int string_to_int (char string[]);

char* remove_blank(char* original_string);

int lexicompare(char str1[], char str2[]);

#endif