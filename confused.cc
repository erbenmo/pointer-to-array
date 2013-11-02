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

/*
 *a: 19
  a: 0x7fbbd1c000e0
 &a: 0x7fff5746aad8
 *b: 19
  b: 0x7fff5746aad4
 &b: 0x7fff5746aad4
 *c: 19
  c: 0x7fff5746aad4
 &c: 0x7fff5746aac8
*/
