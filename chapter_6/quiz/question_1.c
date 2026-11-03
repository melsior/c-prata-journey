/*
 * Find the value of quack after each line; each of the final five statements
 * uses the value of quack produced by the preceding statement. int quack = 2;
 * quack += 5;
 * quack *= 10;
 * quackuack -= 6;
 * quack /= 8;
 * quack %= 3;
 */

#include <stdio.h>

int main(void) {
  int quack = 2;
  quack += 5;
  printf("quack is %d", quack);
  quack *= 10;
  printf("quack is %d", quack);
  quack -= 6;
  printf("quack is %d", quack);
  quack /= 8;
  printf("quack is %d", quack);
  quack %= 3;
  printf("quack is %d", quack);

  return 0;
}
