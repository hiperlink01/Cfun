#include <stdio.h>

void desenha_retangulo_solido(int linhas, int colunas, char carac){
    
    for (int i=0; i<linhas; i++){
        for (int j=0; j<colunas; j++){
            printf("%c", carac);
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

    desenha_retangulo_solido(linhas, colunas, carac);
    
}
