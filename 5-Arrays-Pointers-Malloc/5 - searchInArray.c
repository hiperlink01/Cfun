#include <stdio.h>
#include <stdlib.h>

int * alloc_arr(int size){

    int* arr = (int*) malloc(sizeof(int) * size);

    for (int i=0; i<size; i++){

        arr[i] = 0;

    }

    return arr;

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

int search_in_arr(int* arr, int size, int value_to_search){

    for (int i = 0; i<size; i++){
    
        if (arr[i] == value_to_search){ return i; }
    
    }

    return -1;
}

int main(){

    int* arr = alloc_arr(10);

    input_arr(arr, 10);

    printf("%d\n", search_in_arr(arr, 10, 67));

}