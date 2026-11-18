#include <unistd.h>  
void my_putchar(char c) {
  write(1, &c, 1);
}
void my_print_reverse_alphabet(){
    char leter='z';
    while (leter>='a'){
        my_putchar(leter);
        leter--;
    }
    my_putchar('\n');

}