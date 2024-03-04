#include <stdio.h>

float phi = 3.141592653589793238462643383279502884197;

int main(){
    printf("%f\n", phi);
    printf("%.1f\n", phi);
    printf("%.2f\n", phi);
    printf("%.3f\n", phi);
    printf("%.4f\n", phi);
    printf("%.5f", phi);
    return 0;
}
//Titik yang diikuti angka ini disebut format specifier yang digunakan untuk mengatur cara output yang dihasilkan oleh fungsi printf.
//Contohnya %.2f menampilkan angka dengan tingkat ketelitian 2 digit setelah koma