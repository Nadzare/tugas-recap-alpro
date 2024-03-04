#include <stdio.h>
int s1, t1;
int v2, t2;
int s3, v3;
float kecepatan, jarak, waktu;

int main() {
  printf("PROGRAM MENGHITUNG KECEPATAN, JARAK & WAKTU\n");



  printf("MENGHITUNG KECEPATAN\n");
  printf("Masukan jarak : ");
  scanf("%d", &s1);

  printf("Masukan waktu : ");
  scanf("%d", &t1);

    printf("\n");
    
 

  printf("MENGHITUNG JARAK\n");
  printf("Masukan kecepatan : ");
  scanf("%d", &v2);
    
  printf("Masukan waktu : ");
  scanf("%d", &t2);

    printf("\n");
    
  

  printf("MENGHITUNG WAKTU\n");
  printf("Masukan jarak : ");
  scanf("%d", &s3);

  printf("Masukan kecepatan : ");
  scanf("%d", &v3);


    
    

  
 printf("\n");
 printf("HASIL PROGRAM \n");

    
  
  kecepatan = s1/t1;
  printf("Hasil Kecepatan : %.2f\n", kecepatan);

    printf("\n");
    
  
  jarak = v2*t2;
  printf("Hasil Jarak :%.2f\n", jarak);
  
    printf("\n");

 
  waktu = s3/v3;
  printf("Hasil Waktu : %.2f\n", waktu);

 return 0;
}