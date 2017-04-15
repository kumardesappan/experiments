#include <stdio.h>
#include <stdlib.h>

int main()
{
  int a,b;
  a = 101;
  b = 102;
  b += a;
  
  a = b+25;

  printf("Hello World\n");
  printf("A : %d, B : %d\n", a, b);
}