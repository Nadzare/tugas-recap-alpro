#include <stdio.h>
int jmlarr;
int jumlah;

int main(){
    printf("Masukan jumlah array : ");
    scanf("%d", &jmlarr);
    int array[jmlarr];

    printf("Masukan nilai:\n");
    for (int i = 0; i < jmlarr; i++) {
        scanf("%d", &array[i]);
        jumlah += array[i];
    }
    printf("Hasil penjumlahan seluruh array : %d", jumlah);
}