#include <unistd.h>
void my_putchar(char c) {
   write(1, &c, 1);
}
void my_print_alphabet(){ 
    char leter='a';
    while (leter<='z'){
        my_putchar(leter);
        leter++;
    }
    my_putchar('\n');
}
