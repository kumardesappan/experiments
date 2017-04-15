#include <stdio.h>
#include <stdlib.h>

int addVars(int a, int b);

int main()
{
  int a,b,c;
  a = 101;
  b = 102;
  b += a;
  
  a = b+25;
  
  c = addVars(a,b);

  printf("Hello World\n");
  printf("A : %d, B : %d, C : %d \n", a, b, c);
}