#include "kiwi.h"
#include <stdio.h>

int main() {
    kw_init();
    char name[100];
    int* test;
    input("Enter your name: ", name, 100);
    printf("Hello, %s!\n", name);
    iinput("Enter a number: ", &test, 100);
    printf("You entered: %d\n", test);
    return 0;
}
