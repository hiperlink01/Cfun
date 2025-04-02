#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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