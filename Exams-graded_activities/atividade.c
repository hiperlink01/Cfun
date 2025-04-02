#include <stdio.h>
#include <stdlib.h>

int Fibo(int n){

    int two_behind = 0, one_behind = 1, current_term = two_behind + one_behind;

    if (n<=1){ return two_behind; }
    if (n==2){ return one_behind; }
    if (n==3){ return current_term; }
    if (n>=4){

        for (int i=3; i < n; i++){

            two_behind = one_behind;
            one_behind = current_term;
            current_term = two_behind + one_behind;

        }

        return current_term;

    }

}

double Generate_Golden_Number(){
    
    return (double)Fibo(100)/(double)Fibo(99);

}

double Calculate_Greater_Side(double lesser_side){

    return (double)lesser_side * Generate_Golden_Number();;

}

void Calculate_Greater_Arr(int* lesser_arr, int* greater_arr, int arr_size){

    greater_arr = (double*)malloc(sizeof(int)*arr_size);

    for (int i = 0; i < arr_size; i++){

        greater_arr[i] = Calculate_Greater_Side(lesser_arr[i]);

    }

}

int main(){

    double *lesser_arr, *greater_arr, *aux_arr = NULL;
    int arr_size = 0;

    arr_size++;

    lesser_arr = (double*) malloc(sizeof(double) * arr_size);

    scanf("%lf", &lesser_arr[arr_size-1]);

    while (lesser_arr[arr_size-1] > 0) {

        aux_arr = (double*) malloc(sizeof(double) * arr_size);
        
        for (int i = 0; i < arr_size; i++){

            aux_arr[i] = lesser_arr[i];

        }

        free(lesser_arr);

        arr_size++;

        lesser_arr = (double*) malloc(sizeof(double) * arr_size);

        scanf("%lf", &lesser_arr[arr_size-1]);

        free(aux_arr);

    }
    
    Calculate_Greater_Arr(lesser_arr, greater_arr, arr_size);
    
    for (int i = 0; i<arr_size; i++){

        printf("\n%do ret: %.4lf X %.4lf = %.4lf\n", i, lesser_arr[i], greater_arr[i], (lesser_arr[i] * greater_arr[i]));

    }



}