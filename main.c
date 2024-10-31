#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "main.h"

int x, y; /* game input*/

void game(char** arr, int pr, int pc, int br, int bc, int gr, int gc) { /*game input*/

    
    int box = 0;
    char input;
    while ((arr[br][bc] != arr[gr][gc]) && (box != 1)) {
    
	disableBuffer();
	scanf("%c", &input);
	enableBuffer();
	arr[br][bc] = ' ';
	 switch(input) {
        
	    case 'w': /*Move up*/
		if (br > 0 && arr[br - 1][bc] != '*') {
	            if (arr[br - 1][bc] == 'B') {
			if (br > 1 && arr[br - 2][bc] != '*'  && arr[br -2][bc] != 'B') {
		            arr[br - 2][bc] = 'B';
			    arr[br - 1][bc] = 'P';
			    arr[br][bc] = ' ';
			    br--;
			}
		    } else { /*player move*/
			arr[br - 1][bc] = 'P';
			arr[br][bc] = ' ';
			br--;
		    }
	        }
		break;
	    case 's': /*Move down*/
    if (br < pr - 1 && arr[br + 1][bc] != '*') {
        if (arr[br + 1][bc] == 'B') { 
            if (br < pr - 2 && arr[br + 2][bc] != '*' && arr[br + 2][bc] != 'B') {
                arr[br + 2][bc] = 'B';
                arr[br + 1][bc] = 'P';
                arr[br][bc] = ' ';
                br++;
            } else {
                printf("Can't push\n");
            }
        } else { /* player move */
            arr[br + 1][bc] = 'P';
            arr[br][bc] = ' ';
            br++;
        }
    }
    break;
case 'd': /*Move right*/
      if (bc < pc - 1 && arr[br][bc + 1] != '*') {
        if (arr[br][bc + 1] == 'B') { 
            if (bc < pr - 2 && arr[br][bc + 2] != '*' && arr[br][bc + 2] != 'B') {
                arr[br][bc + 2] = 'B';
                arr[br][bc + 1] = 'P';
                arr[br][bc] = ' ';
                bc++;
            } else {
                printf("Can't push box\n");
            }
        } else { /* Player move */
            arr[br][bc + 1] = 'P';
            arr[br][bc] = ' ';
            bc++;
        }
    }
              break;
           case 'a': /*Move left*/
	        if (br > 0 && arr[br - 1][bc] != '*') {
                    if (arr[br - 1][bc] == 'B') {
                        if (br > 1 && arr[br - 2][bc] != '*'  && arr[br -2][bc] != 'B') {
                            arr[br - 2][bc] = 'B';
                            arr[br - 1][bc] = 'P';
                            arr[br][bc] = ' ';
                            br--;
                        }
                    } else { /*player move*/
                        arr[br - 1][bc] = 'P';
                        arr[br][bc] = ' ';
                        br--;
                    }
                }
                break;


     }
     
     {
     arr[br][bc] = 'p'; /*player position*/
     }
     printMap(arr, pr, pc);
     
     
     }

     


}

     
     
     

     




     
     


     
     
     

     

     




        

