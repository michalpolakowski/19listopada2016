#include <stdio.h>
int main(){
  int a;
  int b;
  printf("Pierwsza liczba:");
  scanf("%d", &a);
  printf("Druga liczba:");
  scanf("%d", &b);
  while(a<=b){
    printf("%d\n", a);
    a++;
  }
  return 0;
}
