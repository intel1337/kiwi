#include <stdio.h>
#include <stdlib.h>


int iinput(char prompt[], float* var, int size) {
    printf("%s", prompt);
    char input[size];
    fgets(input, size, stdin);
    *var = atof(input);

}

