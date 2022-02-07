#include <stdio.h>
#include <string.h>

/*;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;;;;;;;     PROGRAM BY AMMAR RIDWAN DARMA 2IA01             ;;;;;;;;
;;;;;;;                                                     ;;;;;;;;
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
*/
void main() {
char nama[] = "Universitas Gunadarma";
char universitas[30];
char lokasi[]=" Depok";
int panjang_nama;

strcpy(universitas,nama);
printf("string universitas: %s\n", universitas);
strcat(universitas,lokasi);
printf("isi dari string universitas: %s\n", universitas);
panjang_nama=strlen(nama);
printf("Panjang string nama: %d karakter\n", panjang_nama);
}
