#include <stdio.h>

void main()
{
  int a, b, z;
  int *pa, *pb;

  // Enter A
  printf("Masukkan Nilai a: ");
  scanf("%d", &a);
  pa = &a;

  // Enter B
  printf("Masukkan Nilai b: ");
  scanf("%d", &b);
  pb = &b;

  printf("=====SEBELUM PERTUKARAN=====\n");
  printf("Nilai a: %d, Nilai b: %d \n \n", a, b);

  printf("=====SETELAH PERTUKARAN=====\n");
  z = *pa;
  *pa = *pb;
  *pb = z;
  printf("Nilai a: %d, Nilai b: %d", a, b);
}