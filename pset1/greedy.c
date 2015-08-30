#include <cs50.h>
#include <stdio.h>

int main(void) {
  printf("Enter dollar amount: ");
  float f = GetFloat();
  f *= 100;
  int cents = (int) f;

  int coins = 0;

  while (cents >= 25) {
    coins++;
    cents -= 25;
  }
  while (cents >= 10) {
    coins++;
    cents -= 10;
  }
  while (cents >= 5) {
    coins++;
    cents -= 5;
  }
  while (cents >= 1) {
    coins++;
    cents -=1;
  }
  
  printf("%d\n", coins);
}
