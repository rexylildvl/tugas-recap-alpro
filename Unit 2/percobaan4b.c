#include <stdio.h>

int i, j;

int main(){
    
    for (i = 2; i <= 3; ++i) {
        printf("Bilangan utama: %d\n", i);
        
        for (j = 1; j <= 2; ++j) {
            printf(" Bilangan pengali: %d\n", j);
            printf("  Hasil perkalian: %d\n\n", j * i);
            }
        
    }

    return 0;
}
//Program ini menggunakan dua perulangan for untuk menampilkan bilangan utama dan bilangan pengali serta hasil perkaliannya
//Variabel i diinisialisasi dengan nilai 2, dan perulangan for dimulai.
//Program menampilkan bilangan utama dengan format "Bilangan utama: %d\n".
//Variabel j diinisialisasi dengan nilai 1, dan perulangan for dimulai.
//Program menampilkan bilangan pengali dengan format "Bilangan pengali: %d\n".
//Program menampilkan hasil perkalian dengan format "Hasil perkalian: %d\n\n".
//Perulangan for untuk j berakhir, dan program kembali ke perulangan for untuk i.
//Perulangan for untuk i berakhir, dan program berakhir.
//Dengan ini, program akan menampilkan bilangan utama 2 dan 3, bilangan pengali 1 sampai 2, dan hasil perkaliannya.