#include <stdio.h>
int main() {
  int x;
  int suma = 0;
  int wcontinue;
  printf("Czy kontynuowac? (1-tak/0-nie)");
  scanf("%d", &wcontinue);
  while (wcontinue == 1) {
    printf("Podaj liczbe:\n");
    scanf("%d", &x);
    suma = suma + x*x;
    printf("Czy kontynuowac? (1-tak 0-nie)");
    scanf("%d", &wcontinue);
  }
  printf("%d\n", suma);
  return 0;
}
