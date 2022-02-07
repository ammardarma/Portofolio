// Memasukkan library stdio.
#include <stdio.h>
#include <iostream>
// Mendefinisikan variabel untuk array dengan maks 99
#define size 99
// mendefinisikan fungsi sort dengan parameter int array dan int
void sort(int[], int);
//mendefinisikan variabel jumlah dan ulang
int jumlah = 0;
char ulang = 'Y';

//fungsi utama
int main(){

 // mendefinisikan array x, variabel i, uang, n dan array hasil serta ulang1 
 while(ulang == 'Y' or ulang == 'y') {  
     int ulang1 = 1;
    int x[size], i, uang, n, hasil[size];
// mengambil data dan menampungnya pada variabel n
    printf("\nBanyak Koin :");
    scanf("%d", &n);
// mengambil data dan menampungnya pada array x
    printf("\nMasukan Jenis Koin : \n");
    for(i = 1; i <= n; i++){
        scanf("\n %d", &x[i]);
    }
//mengurutkan data pada fungsi sort
    sort(x, n);
//menampilkan data yang telah ditampung pada array x tadi.
    printf("\nKoin yang tersedia : \n");
    for(i = 1; i <= n; i++){
        printf("%d", x[i]);
        printf("\n");
    }
//mengambil data untuk dibagi dengan data yang dimiliki di array x, 
    printf("\nMasukan Nilai yang dipecah : ");
    scanf("%d", &uang);
    printf("\n");
    for(i = 1; i <= n; i++){
        hasil[i] = uang / x[i];
        uang = uang % x[i];
    }
// bila bisa dibagi bernilai 1, bila tidak bernilai 0
    for(i = 1; i <= n; i++){
        printf("Keping %d", x[i]);
        printf("-an sebanyak : %d", hasil[i]);
        jumlah = jumlah + hasil[i];
        printf("\n");
    }
//Sisa dari angka yang dibagi tadi dan hasil dari jumlah pembagian data 
    printf("\nSisanya adalah %d", uang);
    printf("\n");
    printf("Jumlah koin minimum adalah %d\n", jumlah);
    

//LOOPING AGAR TERUS MENGULANGI PROGRAM KETIKA USER INGIN MENGULANGP PROGRAM
do {   
    printf("\nApakah anda ingin mengulang program atau tidak?(Y/T) : ");
    scanf("%s", &ulang);
    if(ulang == 'T' or ulang == 't'){
        break;
    }if(ulang == 'Y' or ulang == 'y'){
        ulang1++;
    }else{
        printf("Maaf jawaban yang anda masukkan salah! ");
    }
    }while(ulang1<=1);
    }
    
    return 0;

    
    
}

// Fungsi untuk melakukan sorting data dari yang terbesar ke yang terkecil. 
void sort(int a[], int siz){
    int pass, hold, j;
    for(pass = 1; pass <= siz - 1; pass++){
        for(j = 0;j <= siz - 2; j++){
            if(a[j + 1] < a[j + 2]){
                hold = a[j + 1];
                a[j + 1] = a[j + 2];
                a[j + 2] = hold;
            }
        }
    }
}