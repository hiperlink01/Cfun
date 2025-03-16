#include <stdio.h>

void desenha_retangulo(int linhas, int colunas, char carac){
    
    for (int i=0; i<linhas; i++){
        
        for (int j=0; j<colunas; j++){
            if(i==0 || i==linhas-1 || j==0 || j==colunas-1){
                printf("%c", carac);   
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
    
}

int main(){
    
    int linhas, colunas;
    char carac;
    
    printf("\ncaractere: ");
    scanf("%c", &carac);
    printf("no. de linhas: ");
    scanf("%d", &linhas);
    printf("\nno. de colunas: ");
    scanf("%d", &colunas);

    desenha_retangulo(linhas, colunas, carac);
    
}

