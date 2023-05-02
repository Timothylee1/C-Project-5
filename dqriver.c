//main() qdriver.c
#include <stdio.h>
#include "q.h"

int main(void) {

    //printf("Enter a number (CTRL-D to quit): ");
    int value;
    while (1 == scanf("%d", &value)) {
        if (value <= 0 || value >= 4000) { // 0>= value >=4000 wrong value range
             //printf("Enter a number (CTRL-D to quit): ");
        continue; //jumps to start of loop (repeated prompt till exit or valid)
        }
        printf("%d: ", value);
        decimal_to_roman(value);
        //printf("Enter a number (CTRL-D to quit): ");
    }

//printf("\nQuitting ...\n");

return 0;
}

