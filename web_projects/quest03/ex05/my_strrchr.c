#include<stdio.h>
char* my_strrchr(char* param_1, char param_2){
    int i=0;
    while(param_1[i]!='\0') {
        i++;
    }
   while(i>=0){
        if (param_1[i]==param_2) {
            return &param_1[i];
        }
        i--;
}
   return NULL;
}