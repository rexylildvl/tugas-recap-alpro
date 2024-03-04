#include <stdio.h>

#define MAX_PERSONS 3
#define MAX_NAME_LENGTH 20

int main() {
    
    char names[MAX_PERSONS][MAX_NAME_LENGTH] = {"Roma", "Romi", "Romo"};
    int ages[MAX_PERSONS] = {25, 30, 35};

    printf("Name\t\tAge\n");
    printf("--------------------\n");
    for (int i = 0; i < MAX_PERSONS; i++) {
        printf("%s\t\t%d\n", names[i], ages[i]);
    }

    return 0;
}
//Program ini menggunakan konstanta MAX_PERSONS dan MAX_NAME_LENGTH untuk mengatur batasan jumlah individu dan panjang nama. Berikut adalah bagaimana program bekerja:
//Variabel names diinisialisasi dengan tiga nama individu, yaitu "Roma", "Romi", dan "Romo".
//Variabel ages diinisialisasi dengan tiga umur individu, yaitu 25, 30, dan 35.
//Program menampilkan judul tabel dengan format "Name\t\tAge\n".
//Program menampilkan garis bawah tabel dengan format "--------------------\n".
//Perulangan for dimulai dengan variabel i yang diinisialisasi dengan 0.
//Program menampilkan nama individu dengan format "%s\t\t%d\n", di mana names[i] merupakan nama individu dan ages[i] merupakan umur individu.
//Perulangan for berakhir, dan program berakhir.
//Program akan menampilkan tabel dengan nama individu dan umur individu yang telah diinisialisasi.