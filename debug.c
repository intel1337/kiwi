#include "kiwi.h"
#include <stdio.h>

int main() {
    kw_init();
    char name[100];
    int* test;
    float* test2;
    input("Enter your name: ", name, 100);
    printf("Hello, %s!\n", name);
    iinput("Enter a number: ", &test, 100);
    printf("You entered: %d\n", test);
    finput("Enter a float", &test2, 100);
    printf("\n");
    printf("You entered :%f", test2);
    printf("\n");
    loadbar(50);
    printf("\n");
    loadperc(10);
    etc();

    return 0;
}
