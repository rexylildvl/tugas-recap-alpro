#include <stdio.h>

char fullname[30];

int main(){
    printf("Masukan nama lengkap kamu: \n");
    scanf("%s", fullname);
    printf("Halo %s", fullname);
    return 0;
}
//Perbedaan output dengan percobaan5b adalah nama yang dituliskan kembali tidak full, hanya nama depan, kecuali jika ditulis tanpa spasi