#include <stdio.h>
int main(){
  int a;
  int b;
  int suma=0;
  printf("Pierwsza liczba:");
  scanf("%d", &a);
  printf("Druga liczba:");
  scanf("%d", &b);
  while(a<=b){
    printf("%d\n", a);
    suma=suma+a;
    a++;
  }
  printf("%d\n", suma);
  return 0;
}
