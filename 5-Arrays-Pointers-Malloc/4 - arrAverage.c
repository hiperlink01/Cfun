#include <stdio.h>
#include <stdlib.h>

int * alloc_arr(int size){

    int* arr = (int*) malloc(sizeof(int) * size);

    for (int i=0; i<size; i++){

        arr[i] = 0;

    }

    return arr;

}

void free_arr(int* arr){

    free(arr);

}

void input_arr(int* arr, int size){

    for (int i = 0; i < size; i++) {

        printf("%d: ", i);
        scanf("%d", &arr[i]);

        if (i==0) { printf("[%d]\n\n", arr[i]); }
        
        else{

            for (int j = 0; j <= i; j++) {

                if (j == 0) { printf("[%d, ", arr[j]); }

                if (j>0 && j<i){ printf("%d, ", arr[j]); }

                if (j == i) { printf("%d]\n\n", arr[j]); }
                
            }
        }
    }
}

float arr_average(int* arr, int size){

    float average = 0;

    for (int i = 0; i < size; i++){ average += ((float)arr[i]); }

    average = average/((float)size);

    return average;

}

int main(){

    int* arr = alloc_arr(10);

    input_arr(arr, 10);

    printf("%f\n", arr_average(arr, 10));

}