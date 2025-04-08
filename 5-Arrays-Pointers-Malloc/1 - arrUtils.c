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

void print_arr(int* arr, int size){

    for (int i = 0; i < size; i++) {

        if (i == 0) { printf("\nV: [%d, ", arr[i]); }

        if (i>0 && i<size-1){ printf("%d, ", arr[i]); }

        if (i == size-1) { printf("%d]\n\n", arr[i]); }
        
    }
}

int* resize_arr(int* arr, int old_T, int new_T){

    int* new_arr = (int*) malloc(sizeof(int) * new_T);

    if (old_T < new_T){
 
        for (int i=0; i < new_T; i++){

            if (i < old_T){ new_arr[i] = arr[i]; }
            else { new_arr[i] = 0; }

        }
    }

    else /*if (old_T == new_T) or (old_T > new_T)*/ {

        for (int i=0; i < new_T; i++){ new_arr[i] = arr[i]; }

    }

    free_arr(arr);

    return new_arr;

}

int main(){

    int* arr = alloc_arr(10);

    input_arr(arr, 10);
    print_arr(arr, 10);

    arr = resize_arr(arr, 10, 15);
    print_arr(arr, 15);

}