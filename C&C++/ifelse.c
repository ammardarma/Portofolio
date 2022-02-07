#include <stdio.h>

int main ()
{

    int a,b,c,d,e,max;

     scanf("%i",&a);
    scanf("%i",&b);
    scanf("%i",&c);
    scanf("%i",&d);
    scanf("%i",&e);

    printf("masukkan bilangan pertama : %d\n", a);


    printf("masukkan bilangan kedua : %d\n",b);


    printf("masukkan bilangan ketiga : %d\n",c);


    printf("masukkan bilangan keempat : %d\n", d);


    printf("masukkan bilangan kelima : %d\n", e);


    /*buatlah kondisi dengan membanding masing - masing
 bilangan untuk mencari bilangan manakah yang paling
 besar*/

    if((a>b)&&(a>c)&&(a>d)&&(a>e)) {
        max=a;
    }
    else if((b>a)&&(b>c)&&(b>d)&&(b>e)) {
        max=b;
    }
    else if((c>a)&&(c>b)&&(c>d)&&(c>e)) {
        max=c;
    }
    else if((d>a)&&(d>b)&&(d>c)&&(d>e)) {
        max=d;
    }
    else {
        max=e;
    }

    printf("\n");
    printf("Bilangan terbesar adalah %i\n",max);

    /*buatlah penyeleksian dengan kondisi
    -> jika max lebih dari 0 maka akan mencetak text
  "Bilangan tersebut adalah bilangan positif(+)"
    -> jika tidak maka akan mencetak text "Bilangan
  tersebut adalah bilangan negatif(-)"*/

    if (max > 0) {
        printf("Bilangan tersebut adalah bilangan positif(+)");
    }
    else {
        printf("Bilangan tersebut adalah bilangan negatif(-)");
    }

}
