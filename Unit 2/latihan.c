#include <stdio.h>

int main() {
    int jumlahTransaksi;
    int totalPengeluaran = 0;

    scanf("%d", &jumlahTransaksi);

    if (jumlahTransaksi <= 0) {
        printf("Tidak ada transaksi hari ini\n");
    } else {
        int i;
        for (i = 0; i < jumlahTransaksi; i++) {
            int nominal;
            scanf("%d", &nominal);

            totalPengeluaran += nominal;
        }
    }

    printf("Total pengeluaran hari ini: %d\n", totalPengeluaran);

    return 0;
}