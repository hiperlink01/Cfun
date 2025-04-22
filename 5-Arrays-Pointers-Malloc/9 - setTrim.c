#include <stdio.h>
#include <stdlib.h>

int * alloc_arr(int size){

    int* arr = (int*) malloc(sizeof(int) * size);

    for (int i=0; i<size; i++){

        arr[i] = 0;

    }

    return arr;

}

int* Create_Aux_Arr(int* original_arr, int arr_size){

    int* aux_arr = (int*)malloc(sizeof(int)*arr_size);
    
    for (int i = 0; i < arr_size; i++) {
        aux_arr[i] = original_arr[i];
    }

    return aux_arr;

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

int* Trim_Set(int* set, int set_size, int *trimmed_set_size){

    /*
    creating aux_set to free memory at the end of function
    while keeping original array intact
    if called inside other functions
    */
   // int* aux_set = Create_Aux_Arr(set, set_size);

    //trimmed_set_size is initially the same as original, for the case no trimming is necessary
    *trimmed_set_size = set_size;

    //its size is 1 less than set_size because all elements being equal is the most extreme case
    int indexes_of_repeated_elements[set_size-1];
    
    //SEARCH FOR REPEATING ELEMENTS IN aux_set:
    //lock on prior element
    for (int i = 0; i < set_size; i++){
 
        //compare it with every posterior element
        for (int j = set_size-1; j > i; j--){
 
            //if repeated element is found:
            if (set[i] == set[j]){

                //add the index (i) of the prior element to the array,
                indexes_of_repeated_elements[ (set_size-(*trimmed_set_size)) ] = i;

                //diminish the size of trimmed set (not equal to original set anymore)
                *trimmed_set_size--;
                
                //and break the comparison loop (j)
                break;

            }
        }
    }

    for (int i = 0; i < set_size-(*trimmed_set_size); i++){
        printf("%d\n", indexes_of_repeated_elements[i]);
    }

    //both sizes being equal means no trimming is necessary; function will end here
    if (*trimmed_set_size == set_size) { return set; }

    //allocate with resulting size
    int* trimmed_set = (int*)malloc(sizeof(int) * (*trimmed_set_size));

    //FEEDING trimmed_set WITH UNIQUE ELEMENTS:

    //to iterate through indexes_of_repeated_elements[]
    int k = 0;

    //to iterate through aux_set and trimmed_set simultaneously; smaller size is used as loop ending
    for (int i = 0, j = 0; j < *trimmed_set_size; i++, j++){

        /*
        always a correspondence of the current position (i) in aux_set[] is found in indexes_of_repeated_elements[],
        the current position is skipped
        and the next position (k) of indexes_of_repeated_elements[] gets ready for check.
        Process is repeated until unique element is found
        */
        while (i == indexes_of_repeated_elements[k]){ i++; k++; }

        //finally, trimmed set is fed with unique element
        trimmed_set[j] = set[i];

    }

    //free(aux_set);
    return trimmed_set;

}

int main(){

    int* set;
    int set_size;

    int trimmed_set_size;

    scanf("%d", &set_size);
    set = alloc_arr(set_size);
    input_arr(set, set_size);

    int* trimmed_set = Trim_Set(set, set_size, &trimmed_set_size);

    print_arr(trimmed_set, trimmed_set_size);

}