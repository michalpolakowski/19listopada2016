#include <stdio.h>
int main(){
  int a;
  int sil=1;
  int b=1;
  printf("Podaj liczbę calkowita:");
  scanf("%d", &a);
  while (sil<=a){
    b=sil*b;
    sil++;
  }
  printf("%d\n", b);
}
