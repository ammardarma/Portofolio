#include <stdio.h>

int main(){

union data {
    float keliling;
    double luas;
    float ipk;
} lingkaran;
float jarijari;

printf("Masukkan Jari-jari Lingkaran : ");scanf("%f", &jarijari);
lingkaran.keliling = 3.14*jarijari*2;
printf("Maka Keliling Lingkaran = %f\n",lingkaran.keliling);
lingkaran.luas = 3.14*jarijari*jarijari;
printf("Maka Luas Lingkaran = %f\n",lingkaran.luas);

}

