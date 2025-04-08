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

int index_of_lesser(int* arr, int size){

    int index_of_lesser = 0;

    for (int i = 0; i<size; i++){

        if ( arr[i] < arr[index_of_lesser] ) { index_of_lesser = i; }

    }

    return index_of_lesser;

}

int main(){

    int* arr = alloc_arr(10);

    input_arr(arr, 10);

    printf("%d\n", index_of_lesser(arr, 10));

}