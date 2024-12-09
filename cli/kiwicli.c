#include <stdio.h>
#include <unistd.h>


void msleep(int milliseconds)
{
    usleep(milliseconds * 1000);
    fflush(stdout);
}
void menu() {
    char ch;
    FILE *file = fopen("menu.txt", "r");
    if (file == NULL) {
        fprintf(stderr, "Error: Unable to open file 'menu.txt'.\n");
        return 1;
    }
    while ((ch = fgetc(file)) != EOF) {
        putchar(ch);
    }
    fclose(file);
}

int main() {

    
    return 0;
}
