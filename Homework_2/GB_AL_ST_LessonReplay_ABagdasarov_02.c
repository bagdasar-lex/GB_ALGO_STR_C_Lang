#include <stdio.h>

int main(int argc, char const *argv[]) {
  float num1;
  float num2;
  float result;

  printf("%s\n","Enter first number");
  scanf("%f",&num1);
  printf("%s\n","Enter second number");
  scanf("%f",&num2);
  result = num1 + num2;
  printf("Result is: %f\n",result);
  return 0;
}
