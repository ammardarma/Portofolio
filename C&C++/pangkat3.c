
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//deklarasi function
int pangkatTiga(int *a);

int main()
{
 int jawaban;
 int num1;

 scanf("%d", &num1);
 jawaban = pangkatTiga(&num1);
 printf("Fungsi Pangkat 3\n");
 printf("Masukkan sembarang bilangan bulat : %d", num1);
 printf("\n%d ^ 3 = %d",num1,jawaban);
 return 0;
}
//definisi function
int pangkatTiga(int *a)
{
 return pow(*a,3);
}

