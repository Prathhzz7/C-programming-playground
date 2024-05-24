#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr;
    int n = 7;
    ptr = (int *) malloc(10 * sizeof(int));
  
    for (int i = 0; i < 10; i++) {
        ptr[i] = n * (i + 1);
        printf("\n%d * %d = %d", n, i + 1, ptr[i]);
    }

    ptr = realloc(ptr, 15 * sizeof(int));
    printf("\nAfter reallocation");
    for (int i = 0; i < 15; i++) {
        ptr[i] = n * (i + 1);
        printf("\n%d * %d = %d", n, i + 1, ptr[i]);
    }

    free(ptr);
    return 0;
}
