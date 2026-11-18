#include <stdio.h>
int my_strcmp(char* param_1, char* param_2){
    int i=0;
    while(param_1[i]==param_2[i]&&param_1[i]!='\0') {
        i++;
    }
    if (param_1[i]==param_2[i])
        return 0;
    if (param_1[i]<param_2[i])
        return -1;
    return 1;
}