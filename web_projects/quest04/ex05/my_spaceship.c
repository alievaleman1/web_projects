#include <string.h>
#include <stdlib.h>
#include <stdio.h>
char* my_spaceship(char* param_1){
    int x = 0;
    int y = 0;
    int direction = 0;
    char* directions[] = {"up", "right", "down", "left"};
    for (int i = 0; i < strlen(param_1); i++)
    {
        char letter = param_1[i];
        if (letter == 'R')
        {
            direction = (direction + 1) % 4;
        }
        else if (letter == 'L')
        {
            direction = (direction + 3) % 4;
        }
        else if (letter == 'A')
        {
            if (direction == 0)
            {
                y--;
            }
            else if (direction == 1)
            {
                x++;
            }
            else if (direction == 2)
            {
                y++;
            }
            else
            {
                x--;
            }
        }
    }
    char* result=malloc(70*sizeof(char));
    snprintf(result,70, "{x: %d, y: %d, direction: '%s'}",x,y,directions[direction]);
    return result;
}
