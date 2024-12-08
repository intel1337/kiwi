#ifndef KIWI_H
#define KIWI_H


#include <stdio.h>
#include <stdlib.h>
#define FW_VERSION "1.0.0"


void kw_init() {
    // Check for required configuration file
    FILE *config_file = fopen("kiwi.conf", "r");
    if (config_file == NULL) {
        fprintf(stderr, "Error: Configuration file 'kiwi.conf' not found.\n");
        fprintf(stderr, "Please create the file with necessary settings before using the framework.\n");
        exit(EXIT_FAILURE);
    } else {
        printf("Configuration file found: 'kiwi.conf'.\n");
        fclose(config_file);
    }
}

#endif 
