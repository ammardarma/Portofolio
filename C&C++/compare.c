#include <stdio.h>
#include <stdlib.h>

/*
Nama :
Ammar Ridwan Darma 2IA01 50419666
Gardena Citra Puspita 2IA01

*/
int main() {
int angka1,angka2;
bool hasil;

printf("Enter two integers, and i will tell you the relationship they satisfy: ");
scanf("%d", &angka1);
scanf("%d", &angka2);

if(angka1 != angka2) {
  printf("%d is not equal to %d\n",angka1,angka2);
}
if (angka1 == angka2) {
    printf("%d is equal to %d\n",angka1,angka2);
}
if (angka1 < angka2) {
    printf("%d is less than %d\n",angka1,angka2);
}
if (angka1 <= angka2) {
    printf("%d is less or equal to %d\n",angka1,angka2);
}
if (angka1 > angka2) {
    printf("%d is greater than %d\n",angka1,angka2);
}
if (angka1 >= angka2) {
    printf("%d is greater than or equal to %d\n",angka1,angka2);
}

}
