#include <stdio.h>
int main ()
{
    /*buatlah variabel x,y,z1,z2 dengan tipe data integer*/
    int x,y,z1,z2;

x = -2 < -10; /*buatlah perbandingan apakah -2 lebih kecil dari -10*/
y = 0 > -5; /*buatlah perbandingan apakah 0 lebih besar dari -5*/
z1 = x || y; /*buatlah perbandingan antara x dan y dengan menggunakan operator logika OR*/
z2 = x && y ;/*buatlah perbandingan antara x dan y dengan menggunakan operator logika AND*/

    printf("hasil dari z = x || y adalah %d\n", z1);
    printf("hasil dari z = x && y adalah %d\n", z2);
}
