#include <stdio.h>

void trapezoid()
{
  int a, b, height;
  float area;

  printf("Enter Variable of A: ");
  scanf("%d", &a);
  printf("Enter Variable of B: ");
  scanf("%d", &b);
  printf("Enter Height: ");
  scanf("%d", &height);

  area = (a + b) * height / 2;

  printf("The area is: %lf", area);
}

void main()
{
  trapezoid();
}