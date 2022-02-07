#include <stdio.h>

struct data {
    char nama[50];
    char npm[10];
    float ipk;
};

int main(){
struct data mhs;
printf("Masukkan NAMA : ");scanf("%s", &mhs.nama);
printf("Masukkan NPM : ");scanf("%s", &mhs.npm);
printf("Masukkan IPK : ");scanf("%f", &mhs.ipk);
printf("----------\n");

printf("NAMA MAHASISWA: %s\n",mhs.nama);
printf("NPM MAHASISWA: %s\n",mhs.npm);
printf("BESAR IPK : %.2f\n",mhs.ipk);

}

