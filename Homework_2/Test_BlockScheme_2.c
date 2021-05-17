#include <stdio.h>

int main(int argc, char const *argv[]) {
  int x;
  int y;
  int i;

  x = 1;
  y = 10;
  i = 1;

  do {
    x + i;
    i++;
  } while(i=y);

  printf("%d\n",&x );
  return 0;
}
