#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main () {

int bil=1,hasil;

printf("Deret 10 bilangan kuadrat pertama : \n");
do {

    hasil = pow(bil,2);
    printf("%d\n", hasil);
    bil=bil+1;
} while (bil < 11);
return 0;
}
