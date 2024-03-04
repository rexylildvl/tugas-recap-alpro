#include <stdio.h>

int main() {
    int i = 2, j;

    do {
        printf("Bilangan utama: %d\n", i);
        j = 1;
        
        do {
            printf(" Bilangan pengali: %d\n", j);
            printf("  Hasil perkalian: %d\n\n", j * i);
            j++;
        } while (j <= 2);

        i++;
    } while (i <= 3);

    return 0;
}
//Program ini menggunakan dua perulangan do-while untuk menampilkan bilangan utama dan bilangan pengali serta hasil perkaliannya. Berikut adalah bagaimana program bekerja:
//Variabel i diinisialisasi dengan nilai 2, dan perulangan do-while dimulai.
//Program menampilkan bilangan utama dengan format "Bilangan utama: %d\n".
//Variabel j diinisialisasi dengan nilai 1.
//Perulangan do-while untuk j dimulai.
//Program menampilkan bilangan pengali dengan format "Bilangan pengali: %d\n".
//Program menampilkan hasil perkalian dengan format "Hasil perkalian: %d\n\n".
//Variabel j ditambah 1.
//Perulangan do-while untuk j berakhir, dan program kembali ke perulangan do-while untuk i.
//Variabel i ditambah 1.
//Perulangan do-while untuk i berakhir, dan program berakhir.
//Program akan menampilkan bilangan utama 2 dan 3, bilangan pengali 1 sampai 2, dan hasil perkaliannya.