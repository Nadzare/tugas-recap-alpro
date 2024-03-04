#include <stdio.h>
int jmlTransaksi;
int nominal;
int total;
int i;

int main(){
    printf("Masukan jumlah transaksi : ");
    scanf("%d", &jmlTransaksi);

    if (jmlTransaksi <= 0)
    {
           printf ("Tidak ada transaksi hari ini");
    }else {
        
         printf("Masukan nominal : \n");
        for (int i = 0; i < jmlTransaksi; i++) {
        scanf("%d", &nominal);
        total += nominal; 
        }
        printf("Total Pengeluaran hari ini : %d", total);
    }

    
}