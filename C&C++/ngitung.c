#include <stdio.h>
#include <stdlib.h>

/*
Nama :
Ammar Ridwan Darma 2IA01 50419666
Gardena Citra Puspita 2IA01

*/
int main() {
int angka1,angka2,angka3;
int sum;
float average;
int product;
int max;
int min;

printf("Input three different integers: ");
scanf("%d", &angka1);
scanf("%d", &angka2);
scanf("%d", &angka3);

sum = angka1+angka2+angka3;
average = sum/3;
product = angka1*angka2*angka3;
if (angka1>angka2) {
        max=angka1;
        min=angka2;
} else {
        max=angka2;
        min=angka1;
}
if (angka3>max) {
        max=angka3;
}
if (angka3<min) {
        min=angka3;
}
printf("Sum is %d\n",sum);
printf("Average is %.0f\n",average);
printf("Product is %d",product);
printf("\nSmallest is %d\n",min);
printf("Largest is %d\n",max);


}
