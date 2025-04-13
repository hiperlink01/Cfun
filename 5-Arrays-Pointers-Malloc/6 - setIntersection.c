#include <stdio.h>
#include <stdlib.h>

int* Create_Aux_Arr(int* original_arr, int arr_size){

    int* aux_arr = (int*)malloc(sizeof(int)*arr_size);
    
    for (int i = 0; i < arr_size; i++) {
        aux_arr[i] = original_arr[i];
    }

    return aux_arr;

}

//function from ./"9 - trimSet.c"
int* Trim_Set(int* set, int set_size, int *trimmed_set_size){

    /*
    creating aux_set to free memory at the end of function
    while keeping original array intact
    if called inside other functions
    */
    int* aux_set = Create_Aux_Arr(set, set_size);

    //trimmed_set_size is initially the same as original, for the case no trimming is necessary
    int *trimmed_set_size = set_size;

    //is 1 less than set_size because all elements being equal is the most extreme case
    int indexes_of_repeated_elements[set_size-1];
    
    //SEARCH FOR REPEATING ELEMENTS IN aux_set:
    //lock on prior element
    for (int i = 0; i < set_size; i++){
 
        //compare it with every posterior element
        for (int j = set_size-1; j > i; j--){
 
            //if repeated elements are found:
            if (aux_set[i] == aux_set[j]){

                //add the index (i) of the prior element to the array,
                indexes_of_repeated_elements[ (set_size-*trimmed_set_size) ] = i;
                
                //diminish the size of trimmed set (not equal to original set anymore)
                *trimmed_set_size--;
                
                //and break the comparison loop (j)
                break;

            }
        }
    }

    //both sizes being equal means no trimming is necessary; function will end here
    if (*trimmed_set_size == set_size) { return set; }

    //allocate with resulting size
    int* trimmed_set = (int*)malloc(sizeof(int) * (*trimmed_set_size));

    //FEEDING trimmed_set WITH UNIQUE ELEMENTS:

    //to iterate through array of indexes
    int k = 0;

    //to iterate through aux_set and trimmed_set simultaneously; smaller size is used as loop ending
    for (int i = 0, j = 0; j < *trimmed_set_size; i++, j++){

        /*
        always a correspondence is found in array of indexes,
        the current position of aux_set (i) is skipped
        and the next position of array of indexes (k) gets ready for check
        */
        while (i == indexes_of_repeated_elements[k]){ i++; k++; }

        //finally, trimmed set is fed with unique element
        trimmed_set[j] = aux_set[i];

    }

    free(aux_set);
    return trimmed_set;

}

int* Generate_Intersection(int* set_1, int set_1_size, int* set_2, int set_2_size, int* intersection_size){

    //pointers to size of trimmed sets
    int* set_1_trimmed_size;
    int* set_2_trimmed_size;

    //trim sets to prevent duplicates
    int* set_1_trimmed = Trim_Set(set_1, set_1_size, set_1_trimmed_size);
    int* set_2_trimmed = Trim_Set(set_2, set_2_size, set_2_trimmed_size);

    //check both sets: if equal elements are found, increase intersection size
    for (int i = 0; i < *set_1_trimmed_size; i++){
        for(int j = 0; j < *set_2_trimmed_size; j++){

            if (set_1_trimmed[i] == set_2_trimmed[j]){ (*intersection_size)++; }
            
        }
    }

    //allocate with resulting size
    int* intersection = (int*)malloc(sizeof(int)*(*intersection_size));

    //lock on positions of intersection array
    for (int k = 0; k<intersection_size; k++){
        //search elements by checking both sets, the same way as before
        for (int i = 0; i < *set_1_trimmed_size; i++){
            for(int j = 0; j < *set_2_trimmed_size; j++){
            
                //insert equal elements into intersection
                if (set_1_trimmed[i] == set_2_trimmed[j]){

                    intersection[k] = set_1_trimmed[i];

                }
            }
        }
    }

    free(set_1_trimmed);
    free(set_2_trimmed);
    return intersection;
}

int main(){}