#include <stdio.h>
#include <stdlib.h>

int* Create_Aux_Arr(int* original_arr, int arr_size){

    int* aux_arr = (int*)malloc(sizeof(int)*arr_size);
    
    for (int i = 0; i < arr_size; i++) {
        aux_arr[i] = original_arr[i];
    }

    return aux_arr;

}

int* Trim_Set(int* set, int set_size, int *trimmed_set_size){

    /*
    creating aux_set to free memory at the end
    while keeping original array intact
    if called inside other functions
    */
    int* aux_set = Create_Aux_Arr(set, set_size);

    //trimmed size is initially the same size as original, for the case no trimming is necessary
    int *trimmed_set_size = set_size;

    //is 1 less than set size because the most extreme case is every entry being equal
    int indexes_of_repeated_nums[set_size-1];
    
    //lock on an element prior
    for (int i = 0; i < set_size; i++){
 
        //compare it with every element posterior to it
        for (int j = set_size-1; j > i; j--){
 
            //if repeated elements are found:
            if (aux_set[i] == aux_set[j]){

                //add the index (i) of the prior element to the array,
                indexes_of_repeated_nums[ (set_size-*trimmed_set_size) ] = i;
                
                //diminish the size of trimmed set
                *trimmed_set_size--;
                
                //and break the comparison loop (j)
                break;

            }
        }
    }

    //allocate with resulting size
    int* trimmed_set = (int*)malloc(sizeof(int) * (*trimmed_set_size));
    
    //quantity of repeated numbers is the difference between original and trimmed sets
    int repeated_nums_qtt = set_size - (*trimmed_set_size);

    //lock on trimmed set array position
    for(int j = 0; j<*trimmed_set_size; j++){
    
        //run through original set
        for (int i = 0; i<set_size; i++){
    
            //check array of indexes
            for (int k = 0; k<repeated_nums_qtt; k++){
    
                //if index (i) is in the array, jump to next element
                if (i == indexes_of_repeated_nums[k]){
                    i++;
                }

            }

            //add element of original set to trimmed set
            trimmed_set[j] = aux_set[i];

        }
        
    }

    set_size = *trimmed_set_size;
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

    //lock on positions of intersection arr
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