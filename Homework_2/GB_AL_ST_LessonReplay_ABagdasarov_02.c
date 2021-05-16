/* #include <stdio.h>

int main(int argc, char const *argv[]) {
  float num1;
  float num2;
  float result;

  printf("%s\n","Enter first number:");
  scanf("%f",&num1);
  printf("%s\n","Enter second number:");
  scanf("%f",&num2);
  result = num1 + num2;
  printf("Result is: %f\n",result);
  return 0;
}
*/


/*
#include <stdio.h>

int main(int argc, char const *argv[]) {

  float num1;
  float num2;
  float result;
  char sign;

  printf("%s","Enter first number: " );
  scanf("%f",&num1 );

  printf("%s","Enter operator: " );
  fseek(stdin, 0, SEEK_END);
  scanf("%c",&sign );
  if (sign == '/') {
    do {
      printf("%s","Enter second number: " );
      scanf("%f",&num2 );
    } while(num2 == 0);
  }
  if (!(sign == '/' && num2 == 0 )) {
  switch (sign) {
    case '+':
          result = num1 + num2;
          break;
    case '-':
          result = num1 - num2;
          break;
    case '*':
          result = num1 * num2;
          break;
    case '/':
          result = num1 / num2;
          break;
    }
      printf("Result is: %f\n",result );
  } else {
    printf("%s\n", "Incorect input, division by zero!" );
  }
  return 0;
}
*/



/*//Алгоритм Эвклида


#include <stdio.h>

int euclidus(int a, int b){
    while (a != b) {
      if (a > b) {
        a = a - b;
      } else {
        b = b - a;
      }
    }
    return a;
}

int main(int argc, char const *argv[]) {
  int a;
  int b;

  printf("%s","Enter A: " );
  scanf("%d",&a );
  printf("%s","Enter B: " );
  scanf("%d",&b );

  printf("НОД = %d\n",euclidus(a, b) );
  return 0;
}
*/
//Ускоренный Эвклид

#include <stdio.h>

 /* int euclidus(int a, int b){
    while (a != b) {
      if (a > b) {
        a = a - b;
      } else {
        b = b - a;
      }
    }
    return a;
}
*/
int euclidusFast(int a, int b,) {
  int c;
  while (b) {
    c = a % b;
    a = b;
    b = c;
  }
  return a;
}

int main(int argc, char const *argv[]) {
  int a;
  int b;

  printf("%s","Enter A: " );
  scanf("%d",&a );
  printf("%s","Enter B: " );
  scanf("%d",&b );

  printf("НОД = %d\n",euclidusFast(a, b) );
  return 0;
}
