/** EL2008 Praktikum Pemecahan Masalah dengan Pemrograman 2025/2026 * Modul : 5 - Foundation of Algorithm
* Percobaan : Foundation of Algorithm
* Hari dan Tanggal : Selasa, 12 Mei 2026 
* Nama File : soal1.c 
* Pembuat : Mhd. Khalil Alfaiz Hutasuhut
* Deskripsi : mencetah pre order, in order, post order dari silsilah dinasti langit 
*/ 

#include <stdio.h>
#include <stdlib.h>


void preorder(int i, int n, int array[]) {
    if (i >= n) return;
    printf(" %d", array[i]);
    preorder(2 * i + 1, n, array);
    preorder(2 * i + 2, n, array);
}


void inorder(int i, int n, int array[]) {
    if (i >= n) return;
    inorder(2 * i + 1, n, array); 
    printf(" %d", array[i]);
    inorder(2 * i + 2, n, array);  
}


void postorder(int i, int n, int array[]) {
    if (i >= n) return;
    postorder(2 * i + 1, n, array); 
    postorder(2 * i + 2, n, array); 
    printf(" %d", array[i]);
}

int main() {
    int n;
    
    
    if (scanf("%d", &n) != 1) {
        return 0;
    }
    
  
    int *array = (int*)malloc(n * sizeof(int));
    
 
    for (int i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }


    printf("PRE");
    preorder(0, n, array);
    printf("\n");

 
    printf("IN");
    inorder(0, n, array);
    printf("\n");

 
    printf("POST");
    postorder(0, n, array);
    printf("\n");

   
    free(array);
    
    return 0;
}
