#include <stdio.h>
char* reverse_string(char* param_1){
    int i=0;
    int j=0;
    char letter;
    while (param_1[j]!='\0'){
        j++;
    }
    j--;
    while(i<j){
        letter=param_1[i];
        param_1[i]=param_1[j];
        param_1[j]=letter;
        i++;
        j--;
    }
    return param_1;
}

