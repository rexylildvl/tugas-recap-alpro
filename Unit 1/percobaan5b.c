#include <stdio.h>

char fullname[30];

int main(){
    printf("Masukan nama lengkap kamu: \n");
    fgets(fullname, sizeof(fullname), stdin);
    printf("Halo %s", fullname);
    return 0;
}
//Perbedaan outputnya dengan percobaan5a yaitu nama yang dituliskan kembali lengkap walaupun inputannya disertai spasi