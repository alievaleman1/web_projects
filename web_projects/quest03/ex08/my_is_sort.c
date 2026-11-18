#include <stdbool.h>
#ifndef STRUCT_INTEGER_ARRAY
#define STRUCT_INTEGER_ARRAY
typedef struct s_integer_array
{
    int size;
    int* array;
} integer_array;
#endif
bool my_is_sort(integer_array* param_1){
    int size=param_1->size;
    if (size<=1)
        return true;
    int i=0;
    while (i<size-1&&param_1->array[i]==param_1->array[i+1]){
        i++;
    }
    if (i==size-1)
        return true;
    if(param_1->array[i]<param_1->array[i+1]){
        for(i=0;i<size-1;i++){
            if (param_1->array[i]>param_1->array[i+1])
                return false;
        }
    }
    else{
        for(i=0;i<size-1;i++){
            if (param_1->array[i]<param_1->array[i+1])
                return false;
        }
    }
    return true;
}

