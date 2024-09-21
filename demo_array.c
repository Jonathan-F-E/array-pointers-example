#include "demo_array.h"

int array_sum_all(int *array, int length){
    int sum = 0;
    for (int i = 0; i < length; i++){
        sum += *(array + i);
    }
    return sum;
}

int array_sum_even(int *array_begin, int *array_end){
    int sum = 0;
    for (int *p = array_begin; p < array_end; p++){
        if(*p % 2 == 0){
            sum += *p;
        }
    }
    return sum;
}

bool array_are_equal(int *a_begin, int *a_end, int *b_begin, int *b_end){
    if((a_end - a_begin) != (b_end - b_begin)){
        return false;
    }
    while(a_begin != a_end && b_begin != b_end){
        if (*a_begin != *b_begin){
            return false;
        }
        a_begin++;
        b_begin++;
    }
    return true;
}