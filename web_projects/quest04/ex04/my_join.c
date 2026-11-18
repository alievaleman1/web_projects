#include <stdlib.h>
int strlenN(char *str){
    int i=0;
    while(str[i]!='\0'){
        i++;
    }
    return i;
}

char* my_strcpy(char* param_1, char* param_2){
    int i=0;
    while(param_2[i]!='\0'){
        param_1[i]=param_2[i];
        i++;
    }
    return param_1;
}

#ifndef STRUCT_STRING_ARRAY
#define STRUCT_STRING_ARRAY
typedef struct s_string_array
{
    int size;
    char** array;
} string_array;
#endif
char* my_join(string_array* param_1, char* param_2){
if ((*param_1).size==0){
        return NULL;
}
int sep_length=strlenN(param_2);
int total_length=0;
for(int i=0;i<((*param_1).size);i++){
    total_length+=(strlenN((*param_1).array[i]));
}
total_length+=sep_length*(((*param_1).size)-1);
char *newstring=malloc((total_length+1)*sizeof(char));

int pos=0;
for(int i=0;i<((*param_1).size);i++){
    int j=0;
    while((*param_1).array[i][j]!='\0'){
        newstring[pos++]=(*param_1).array[i][j++];
    }
    if(i<(*param_1).size-1){
        for(int k=0;k<sep_length;k++){
             newstring[pos++]=param_2[k];
        }

}

}
newstring[pos]='\0';
return newstring;
} 