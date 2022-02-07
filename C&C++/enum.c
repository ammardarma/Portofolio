#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//global

enum JenisKelamin {pria=0,wanita=1};

int main(void) {
char nama[25];
enum JenisKelamin gender;
strcpy(nama, "Santi");
gender = wanita;
printf("Nama : %s\n", nama);
printf("Jenis Kelamin : %d", gender);
return 0;


}
