#include <stdio.h>
#include <unistd.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>

#define CLI_VERSION "v0.0.1\n"



void msleep(int milliseconds)
{
    usleep(milliseconds * 1000);
    fflush(stdout);
}
void menu() {
    char ch;
    FILE *file = fopen("menu.txt", "r");
    if (file == NULL) {
        printf("Error opening file.\n");
    }
    while ((ch = fgetc(file)) != EOF) {
        putchar(ch);
    }
    fclose(file);
}

int main() {

    bool running = true;
    char input[BUFSIZ];
    char* project_name;
    char* makedir = "mkdir ";
    char* cd = "cd";
    
    while(running){
        menu();
        printf("\n");
        printf("kiwi@cli:~$");
        fgets(input, sizeof(input), stdin);
        input[strcspn(input, "\n")] = 0; 
        fflush(stdout);
        if (strcmp(input, "newproject") == 0) {
            printf("Name of the project: ");
            scanf("%s", &project_name);
          
            strcat(cd,project_name);
            strcat(makedir, project_name);
            system(makedir);  
        }
        else if(strcmp(input, "version")==0){
            printf("Version : "CLI_VERSION);
            printf("Press Enter to continue...");
            getchar();
            system("clear");
            fflush(stdout);
        }
    }
    return 0;
}
