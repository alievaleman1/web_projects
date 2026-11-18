#include <stdlib.h>
int my_strlen(char *str)
{
    int i=0;
    while (str[i]!='\0')
        i++;
    return i;
}

#ifndef STRUCT_STRING_ARRAY
#define STRUCT_STRING_ARRAY
typedef struct s_string_array
{
    int size;
    char** array;
} string_array;
#endif

#ifndef STRUCT_INTEGER_ARRAY
#define STRUCT_INTEGER_ARRAY
typedef struct s_integer_array
{
    int size;
    int* array;
} integer_array;
#endif


integer_array* my_count_on_it(string_array* param_1){
    integer_array *myArray=malloc(sizeof(integer_array));
    (*myArray).size=(*param_1).size;
    (*myArray).array=malloc(((*myArray).size)*(sizeof(int)));
    int i=0;
    while(i<(*param_1).size){
        ((*myArray).array[i])=my_strlen((*param_1).array[i]);
        i++;
    }
    return myArray;
}