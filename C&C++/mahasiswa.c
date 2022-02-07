#include <stdio.h>

int main() {

char nama[30];
int npm;
char kelas[6];

scanf("%s", &nama);
scanf("%d", &npm);
scanf("%s", &kelas);

printf("Nama = %s\n",nama);
printf("NPM = %d\n",npm);
printf("Kelas = %s\n",kelas);
printf("\n");
printf("\n");
printf("Nama %s, ",nama);
printf("NPM %d, ",npm);
printf("Kelas %s ",kelas);

return 0;

}
