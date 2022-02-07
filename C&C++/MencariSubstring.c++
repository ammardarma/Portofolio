//digunakan untuk mengimport library pada C++
#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <windows.h>
char replay;
//mendeklarasikan fungsi match()
int match(char[], char[]);
//fungsi utama
int main(){
//membuat array a dan b

  char a[100], b[100];
//membuat variabel posisi
    int posisi;
//membuat perulangan untuk menampilkan "apakah anda ingin mengulang program?"
//bila dijawab ya, maka program akan diulang, dan bila tidak, maka akan berhenti. 
    do{
    printf("\n\t\tProgram untuk menentukan Substring dari Sebuah String");
//mengambil input berupa String dan menaruhnya pada array a
     printf("\nMasukan String: \n\t");
     scanf("%s",&a);
//mengambil input berupa String yang akan dijadikan sub-string dan menaruhnya pada array b
    printf("\nMasukan Substring:\n\t");
     scanf("%s",&b);
//menaruh hasil dari fungsi match pada variabel posisi
    posisi = match(a, b);

//jika variabel posisi tidak bernilai -1 maka akan mengeluarkan output "Substring ADA di dalam string."
    if (posisi != -1)
    {
        printf("\n\n\t\t\tSubstring ADA di dalam string.\n\n");
    }
//jika hasilnya -1 maka akan mengeluarkan output "Substring TIDAK ada di dalam string."
    else
    {
        printf("\n\n\t\t\tSubstring TIDAK ada di dalam string.\n\n");
    }
//menerima input untuk syarat perulangan 
printf("Apakah anda ingin mengulang program atau tidak? (y/t)");
        scanf("%s",&replay);
//syarat perulangan yang harus dipenuhi agar perulangan berhasil.     
    }while(replay=='y'||replay=='Y');
    getch();
      
    return 0;
}

//mendeklarasikan fungsi match 
int match(char text[], char pattern[]) {
//membuat variabel c, d, e, text_length, pattern_length, posisi = -1, x=0, y=0, z=0;
    int c, d, e, text_length, pattern_length, posisi = -1, x=0, y=0, z=0;
//mengambil panjang huruf dari variabel text dan variabel pattern
    text_length = strlen(text);
    pattern_length = strlen(pattern);
//jika panjang variabel pattern lebih besar dari variabel text maka akan mengembalikan output -1.
    if(pattern_length > text_length) {
        return -1;
    }
//membuat perulangan untuk mencari tahu apakah kata per kata memenuhi atau tidak antara string dengan substring.
    for (c = 0; c < text_length - 1; c++) {
        posisi = e = c;
        
        for (d = 0; d < pattern_length; d++) {
            //kalau substring dengan string sama, maka memenuhi
            if (pattern[d] == text[e]) {
                printf("\nDi %c Memenuhi", text[e]);
                e++;               
                x = 1;
                y = 1;
                z++;
            } 
             //kalau substring tidak sama dengan string , maka tidak memenuhi
            else {

                printf("\nDi %c Tidak memenuhi", text[e]);              
                y = 0;             
                break;
            }
            
        }
      //jika d sama dengan panjang pattern maka akan mengembalikan output selain -1  
        if(d == pattern_length) {
            return posisi;
        }
    }
    //jika x == 1 dan y == 0 maka akan mengembalikan output -1
    if (x == 1 && y == 0) {
        return -1;
    }
    //jika tidak ada yang terwujud maka akan mengembalikan output -1 
    return -1;
}
