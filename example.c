#include <stdio.h>
#include <stdlib.h> // free

#include "xtx.h"

int main() {
    // Convert from string to number
    int a = xtx_atoi("3782", NULL);
    float b = xtx_atof("9832.489", NULL);
    float c = a + b;
    // Convert number to string
    char* s = xtx_ftoa(c, NULL);
    printf("The sum is %s\n", s);
    free(s); // remember to free
    return 0;
}
