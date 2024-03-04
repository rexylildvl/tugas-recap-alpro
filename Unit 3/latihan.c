#include <stdio.h>

int main() {
    int jumlahElemen;
    int array[100];
    int i;
    int total = 0;

    // Membaca masukan
    scanf("%d", &jumlahElemen);

    for (i = 0; i < jumlahElemen; i++) {
        scanf("%d", &array[i]);
        total += array[i];
    }

    printf("Hasil penjumlahan seluruh elemen pada array: %d\n", total);

    return 0;
}