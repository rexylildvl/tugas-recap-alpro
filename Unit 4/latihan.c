#include <stdio.h>
#include <math.h>

int main() {
    int sisi;
    int luasPersegi, kelilingPersegi, volumeKubus;

    scanf("%d", &sisi);

    kelilingPersegi = 4 * sisi;

    luasPersegi = sisi * sisi;

    volumeKubus = sisi * sisi * sisi;

    printf("Keliling persegi: %d\n", kelilingPersegi);
    printf("Luas persegi: %d\n", luasPersegi);
    printf("Volume kubus: %d\n", volumeKubus);

    return 0;
}