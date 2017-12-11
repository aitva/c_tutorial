#include "stdio.h"
#include "stdlib.h"

int main() {
    const int tab_size = 10;
    int *tab = NULL;

    // allocated memory
    tab = calloc(tab_size, sizeof(int));
    printf("memory allocated at %p\n", tab);

    // print memory
    for (int i = 0; i < tab_size; i++) {
        printf("%d ", tab[i]);
    }
    printf("\n");

    // free memory
    free(tab);
    tab = NULL;
    return 0;
}
