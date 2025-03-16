#include <stdio.h>

void linha2(char carac){
    
    for(int i = 0; i<25; i++){printf("%c", carac);}
    
}

int main(){
    
    linha2('*');
    printf("\nCMP1048\n");
    linha2('@');
    printf("\nTécnicas de Programação\n");
    linha2('+');
    
}