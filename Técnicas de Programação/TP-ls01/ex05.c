#include <stdio.h>

void desenha_retangulo_preenchido(int linhas, int colunas, char contorno, char preenchimento){
    
    for (int i=0; i<linhas; i++){
        
        for (int j=0; j<colunas; j++){
            if(i==0 || i==linhas-1 || j==0 || j==colunas-1){
                printf("%c", contorno);   
            }
            else{
                printf("%c", preenchimento);
            }
        }
        printf("\n");
    }
    
}

int main(){
    
    int linhas, colunas;
    char contorno, preenchimento;
    
    printf("contorno: ");
    scanf("%c", &contorno);
    printf("preenchimento: ");
    scanf("\n%c", &preenchimento);
    printf("no. de linhas: ");
    scanf("%d", &linhas);
    printf("no. de colunas: ");
    scanf("%d", &colunas);

    desenha_retangulo_preenchido(linhas, colunas, contorno, preenchimento);
    
}



