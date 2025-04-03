#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void caixa_com_texto_centralizado(char S[], int N, char C){

    for (int altura = 0; altura < 3; altura++){
        
        if (altura == 0 || altura == 2){

            for (int largura = 0; largura<N; largura++){ printf("%c", C); }
        
        }

        else if (altura == 1){

            if (strlen(S) < N-2){

                // [ (N-2) - strlen(S) ] / 2 = espaços antes e depois do texto.
                // para preencher: colocar os espaços, depois o texto, depois o resto dos espaços.
                // se a divisão tiver resto, fazer 1 espaço a mais à esquerda do texto.

                int qtd_espacos = ((N-2) - strlen(S)) / 2;
                int espaco_resto = ((N-2) - strlen(S)) % 2;
                int aux = qtd_espacos + espaco_resto+1;

                for (int largura = 0; largura<N; largura++){ 

                        if (largura == 0 || largura == N-1){ printf("%c", C); } 
                        
                        else{

                        if (largura <= qtd_espacos + espaco_resto) { printf(" "); }

                        if (largura > qtd_espacos + espaco_resto && largura <= N-qtd_espacos) { 
                            
                            printf("%c", S[largura-aux]);
                        
                        }

                        if (largura >= N-qtd_espacos-1) { printf(" "); }
                    }
                }
    
            }

            else if (strlen(S) == N-2){

                for (int largura = 0; largura<N; largura++){ 

                    if (largura == 0 || largura == N-1){ printf("%c", C); } 
                    
                    else{

                        printf("%c", S[largura-1]);
                    
                    }
                }
            }

            else if (strlen(S) > N-2){

                // [ strlen(S) - (N-2) ] / 2 = quantidade de caracteres que serão retirados das pontas da string.
                // para preencher: colocar o texto a partir da posição de valor igual ao resultado da divisão, e parar antes da posição tamanho da string - resultado da divisão.
                // se a divisão tiver resto, printar 1 letra a mais à esquerda.

                int resto = (strlen(S) - (N-2)) % 2;
                int aux = ((strlen(S) - (N-2)) / 2);

                for (int largura = 0; largura<N; largura++){
    
                    if (largura == 0){ printf("%c", C); } 

                    if (resto == 0 && largura >= aux && largura < strlen(S) - aux){
                        
                        printf("%c", S[largura]);

                    }

                    else if(resto != 0 && largura >= aux && largura < strlen(S)-aux-resto){

                        printf("%c", S[largura]);

                    }

                    if (largura == N-1){ printf("%c", C); }
                }
            }
        }

        printf("\n");
    }
}


int main(){

    char str[100] = "asdf É O CENTRO asdf";
    int N = 10;
    char C = '+';

    caixa_com_texto_centralizado(str, N, C);

    return 0;

}