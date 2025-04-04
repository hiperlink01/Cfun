#include <stdio.h>
#include <stdlib.h>

int* filtrar_intervalo(int V[], int N, int A, int B, int *return_N_result){

    *return_N_result = 0;

    for (int i = 0; i < N; i++){

        if (V[i]>=A && V[i]<=B){ *return_N_result = *return_N_result + 1 ; };

    }

    int* V_result = (int*) malloc(sizeof(int) * (*return_N_result));

    int cont = 0;

    for (int i = 0; i<N; i++){

        if (V[i]>=A && V[i]<=B){ 
            
            V_result[cont] = V[i];
            cont++;
            
        }

    }

    return V_result;

}

int main(){

    int V[17] ={10,22,13,35,8,14,35,27,41,13,71,15,4,51,13,35,27}, N=17, A=15, B=50;
    int * V_result, N_result = 0;

    V_result = filtrar_intervalo(V, N, A, B, &N_result);

    printf("{");

    for(int i=0; i<N_result; i++){

        if (i != N_result-1){
        
            printf("% d,", V_result[i]);
        
        }

        else { printf(" %d ", V_result[i]); }
    }

    printf("}");

    return 0;
}