/* The first C program - hello, world*/
#include <stdio.h>

int main(void)
{
  printf("hello, world \n");


  int x = 42;
  printf("Address of x: %p\n", (void*)&x);  // from stack

  printf("Address of string: %p\n", (void*)"hello");

  return 0;
}
