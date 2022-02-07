#include <stdio.h>

int faktorial(int angka) {
  int i,hasil=1;
  for(i=1; i<=angka; i++) {
      hasil = hasil * i;
      printf("%d",i);
      if (i!=angka) {
        printf(" * ");  
      }
  }
  printf(" = %d",hasil);
}

int main(){
  int input, hasil=1;
  printf("Masukkan bilangan faktorial: ");
  scanf("%d", &input);
  printf("%d! = ",input);
  hasil = faktorial(input);
  return 0;
}
