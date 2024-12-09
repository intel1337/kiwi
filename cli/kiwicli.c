#include <stdio.h>
#include <unistd.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>



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
    
    while(running){
        menu();
        printf("\n");
        printf("kiwi@cli:~$");
        fgets(input, sizeof(input), stdin);
        input[strcspn(input, "\n")] = 0; 

        if (strcmp(input, "newproject") == 0) {
            printf("Name of the project: ");
            char project_name[100];
            fgets(project_name,100,stdin);
            project_name[strcspn(project_name, "\n")] = 0;
            char* makedir = "mkdir";
            char* cd = "cd";
            strcat(cd,project_name);
            strcat(makedir, project_name);
            system(makedir);
            system(cd);
            printf("Initialize git ? Y/n");
            char git_init[2];
            fgets(git_init,2,stdin);
            git_init[strcspn(git_init, "\n")] = 0;
            if(strcspn(git_init,"y")){
                system("git init");
            }
            else{
                printf("git was not initialized..\n");
            }
        }


    }
    return 0;
}
