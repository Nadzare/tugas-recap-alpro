#include <stdio.h>
int kelPersegi, luasPersegi, volKubus;
int sisi;
void math(int sisi) {
    kelPersegi = 4*sisi;
    printf("Keliling Persegi = %d\n", kelPersegi);

    luasPersegi = sisi*sisi;
    printf("Luas Persegi = %d\n", luasPersegi);

    volKubus = sisi*sisi*sisi;
    printf("Volume Kubus = %d", volKubus);
    
}

int main (){
    printf("Masukan panjang sisi : ");
    scanf("%d", &sisi);

    math(sisi);

    return 0;
}