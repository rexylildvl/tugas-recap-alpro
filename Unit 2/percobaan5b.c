#include <stdio.h>

int main() {
    int i = 2, j = 1;

    while (i <= 3) {
        printf("Bilangan utama: %d\n", i);
        
        while (j <= 2) {
            printf(" Bilangan pengali: %d\n", j);
            printf("  Hasil perkalian: %d\n\n", j * i);
            j++;
        }

        i++;
        j = 1;
    }

    return 0;
}
//Program ini menggunakan dua perulangan while untuk menampilkan bilangan utama dan bilangan pengali serta hasil perkaliannya. Berikut adalah bagaimana program bekerja:
//Variabel i diinisialisasi dengan nilai 2, dan perulangan while dimulai.
//Program menampilkan bilangan utama dengan format "Bilangan utama: %d\n".
//Variabel j diinisialisasi dengan nilai 1, dan perulangan while dimulai.
//Program menampilkan bilangan pengali dengan format "Bilangan pengali: %d\n".
//Program menampilkan hasil perkalian dengan format "Hasil perkalian: %d\n\n".
//Variabel j ditambah 1.
//Perulangan while untuk j berakhir, dan program kembali ke perulangan while untuk i.
//Variabel i ditambah 1.
//Variabel j direset menjadi 1.
//Perulangan while untuk i berakhir, dan program berakhir.
//Dengan ini, program akan menampilkan bilangan utama 2 dan 3, bilangan pengali 1 sampai 2, dan hasil perkaliannya.
