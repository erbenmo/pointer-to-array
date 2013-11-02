#include <iostream>

int main() {
  int* a = new int(19);
  int b[1];
  b[0] = 19;
  int* c = b;

  printf("*a: %d\n a: %p\n &a:%p\n", *a, a, &a);
  printf("*b: %d\n b: %p\n &b:%p\n", *b, b, &b);
  printf("*c: %d\n c: %p\n &c:%p\n", *c, c, &c);
  delete a;
}
