#include "stdio.h"
#include "stdlib.h"

int *allocOnes(int nmemb) {
    int *tab = malloc(nmemb);
    if (tab == NULL) {
        return tab;
    }
    for (int i = 0; i < nmemb; i++) {
        tab[i] = 1;
    }
    return tab;
}

int main() {
    const int tab_size = 10;
    int *tab = NULL;

    // allocated memory
    tab = allocOnes(tab_size);
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
