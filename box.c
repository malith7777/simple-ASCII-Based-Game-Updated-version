#include <stdio.h>
#include <stdlib.h>
#include "box.h"

int x, y, rP, lP, rB, lB, rG, lG;
int main(int agl, char* agw[]) { /*main int*/
char** array = NULL;

    
    if (agl != 7) {
    
    printf("Invalid number");
    return 0;
    }
    {
    rP = atoi(agw[1]); /*commandline arguments*/
    }
    {
    lP = atoi(agw[2]);
    }
    {
    rB = atoi(agw[3]);
    }
    {
    lB = atoi(agw[4]);
    }
    {
    rG = atoi(agw[5]);
    }
    {
    lG = atoi(agw[6]);
    }
    
    {
    array = (char**)malloc(rP * sizeof(char*)); /*rows*/
    for (x = 0; x < rP; x++)
    array[x] = (char*)malloc(lP * sizeof(char)); /*coloumns*/
    }

    {
    map(array, rP, lP, rB, lB, rG, lG);
    game(array, rP, lP, rB, lB, rG, lG);
    }
    return 0;

}
