#include <stdio.h>

int main(int argc, char const *argv[]) {

int number;
int d = 0;
int i = 1;
printf("Введите число: ");
scanf("%d",&number );

while (i <= number) {

  if (number % i++ == 0) {
    d++;
  }
}

printf("Число %d %sявляестя простым\n", number, (d == 2) ? "" : "не ");

  return 0;
}
