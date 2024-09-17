#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

int main() {
    int n;
    scanf("%d", &n); // baca jumlah bilangan

    int arr[n];
    
    // baca semua bilangan ke dalam array
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // urutkan array
    qsort(arr, n, sizeof(int), compare);

    // cetak hasil
    for (int i = 0; i < n; i++) {
        printf("%d\n", arr[i]);
    }

    return 0;
}