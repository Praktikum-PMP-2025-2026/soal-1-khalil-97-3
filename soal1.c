#include <stdio.h>
#include <stdlib.h>


void preorder(int i, int n, int array) {
    if (i >= n)
     return;
    printf(" %d", array[i]);
    preorder(2 * i + 1, n, array);
    preorder(2 * i + 2, n, array);
}

int main() {
    int n;
    

    if (scanf("%d", &n) != 1) {
        return 0;
    }


    int *array (int*)malloc(n * sizeof(int));
   
    
   
    for (int i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }

    
    printf("PRE");
    preorder(0, n, array);
    printf("\n");


    free(array)
    
    return 0;
}
