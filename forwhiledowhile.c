#include <stdio.h>

int main(){
  int counter;
  printf("Ile liczb:");
  scanf("%d\n", &counter);
  int tab[counter];

  for (int i=0; i<counter; i=i+1) {
    printf("Podaj %d liczbe: \n", (i+1));
      scanf("%d", &tab[i]);
  }
  for (int i=0; i<counter; i=i+1){
    printf("%d, ", tab[i]);
  }
  while (i<counter) {
    printf("%d, ", tab[i]);
  }
  return 0;
}
