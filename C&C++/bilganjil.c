#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(){
int a;
int b;
int i;
int total=0;
printf("Masukkan bilangan awal: ");
scanf("%d",&a);
printf("Masukkan bilangan akhir: ");
scanf("%d",&b);

for(i=a; i<=b; i++){
if(i % 2 == 1) {
        printf("%d ", i);
        total=total+i;
}
}
printf("\ntotal = %i",total);
}
