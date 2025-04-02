#ifndef U_STRINGS
#define U_STRINGS

int classify_char_consonant(char letter);

int classify_char_scvogal(char letter);

int check_palindrome(char*text);

char* to_lower_case(char original_str[], int len_original_str);

char* to_upper_case(char original_str[], int len_original_str);

void caixa_com_texto_centralizado(char S[], int N, char C);

#endif