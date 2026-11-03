/* Devise a function called min(x, y) that returns the smaller of two double
 * values. Test the function with a simple driver. */
#include <stdio.h>

double min(double x, double y);

int main(void) {
  double num1, num2;
  num1 = 5.6;
  num2 = 8.7;
  printf("The smaller number between %f and %f is %f.\n", num1, num2,
         min(num1, num2));
}

double min(double x, double y) { return (x > y ? x : y); }
