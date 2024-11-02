#include <stdio.h>
#include <stdlib.h>
// 4 bytes
void example()
{
  int x = 42;
}

int main()
{
  example();
  // 4 bytes are allocated in stack
  // 4 bytes removed from stack

  // 4 bytes allocated in heap
  int *x = (int *)malloc(sizeof(int));
  *x = 42;

  free(x);
  // 4 bytes removed from heap

  return 0;
}