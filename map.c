#include<stdio.h>
#include<stdlib.h>
#include"map.h"

void map(char** arr, int pr, int pc, int br, int bc, int gr, int gc) { /*main interface*/

    int x, y;
    system("clear");
    for (x = 0; x < pr; x++) {
    for (y = 0; y < pc; y++)
    {
        {
        arr[x][y] = ' ';
	arr[br][bc] = 'P';
	arr[gr][gc] = 'G';
        }
        
        {
	arr[x][0] = '*';
	arr[x][pc-1] = '*';
        }
        
        {
	arr[0][y] = '*';
	arr[pr-1][y] = '*';
        }
    }
    
    {
    printf("%c",arr[x][y]);
    }
    
    }
    for (x = 0; x < pr; x++) {
    for (y = 0; y < pc; y++)
    printf("%c", arr[x][y]);
    {
    printf("\n");
    }
    }
    {
    {
    printf("move the box to the goal to win the game!\n");
    }
    {
    printf("Press w to move up\n");
    }
    {
    printf("Press s to move down\n");
    }
    {
    printf("Press a to move left\n");
    }
    {
    printf("Press d to move right\n");
    }
    }

}

void printMap(char** arr, int pr, int pc) { /*new interface*/

    int x, y;
    system("clear");
    for (x = 0; x < pr; x++) {
    for (y = 0; y < pc; y++)
    printf("%c", arr[x][y]);
    {
    printf("\n");
    }
    
    }

    {
    {
    printf("move the box to the goal to win the game!\n");
    }
    {
    printf("Press w to move up\n");
    }
    {
    printf("Press s to move down\n");
    }
    {
    printf("Press a to move left\n");
    }
    {
    printf("Press d to move right\n");
    }
    }

}

