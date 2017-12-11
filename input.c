#include "stdio.h"
#include "stdlib.h"

// printHelp prints the help message to the command line.
void printHelp(const char *name) {
    printf("usage: %s <number>\n", name);
    printf("    create & display an array of length <number>\n");
}

int main(int argc, char *argv[]) {
    int tab_size = 0;
    int *tab = NULL;

    // check command line parameters
    if (argc != 2) {
        printHelp(argv[0]);
        return 1;
    }
    tab_size = atoi(argv[1]);
    if (tab_size == 0) {
        printHelp(argv[0]);
        return 1;
    }

    // allocate zeroed memory
    tab = calloc(tab_size, sizeof(int));
    printf("memory allocated at %p\n", tab);

    // display array into the command line
    for (int i = 0; i < tab_size; i++) {
        printf("%d ", tab[i]);
    }
    printf("\n");

    // free the memory
    free(tab);
    tab = NULL;
    return 0;
}
