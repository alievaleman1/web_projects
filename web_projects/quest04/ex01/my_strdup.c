#include <stdlib.h>
char* my_strdup(char* param_1){
    if(param_1==NULL){
        return NULL;
    }
    int len=0;
    while(param_1[len]){
        len++;
    }
    char *myArray=malloc((len+1)*sizeof(char));
    for(int i=0; i<len; i++) {
       myArray[i]=param_1[i];
}
return myArray;

}