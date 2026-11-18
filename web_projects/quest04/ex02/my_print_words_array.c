#include <unistd.h>
void my_putchar(char c){
    write(1,&c,1);
}
void my_putstr(char *str){
    int i=0;
    while(str[i]!='\0'){
    my_putchar(str[i]);
        i++;
    }
}
#ifndef STRUCT_STRING_ARRAY
#define STRUCT_STRING_ARRAY
typedef struct s_string_array
{
    int size;
    char** array;
} string_array;
#endif

void my_print_words_array(string_array* param_1){
    int i=0;
    while(i<(*param_1).size){
        my_putstr((*param_1).array[i]);
        my_putchar('\n');
        i++;
    }

}