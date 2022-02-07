#include<stdio.h>
int main(void)
{
  int a,b;
  b = (5 > 4) || (10 > 9);
  printf("(5 > 4) && (10 > 9): %d \n",b);
  return 0;


  a = ((1 && 1) || (1 || 0)) && !1;
  printf("Isi variabel a: %d \n",a);
  return 0;
}
