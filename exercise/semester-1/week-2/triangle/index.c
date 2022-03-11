#include <stdio.h>

void triangle()
{
  int base, height;
  float result;

  printf("Enter Base: ");
  scanf("%d", &base);
  printf("Enter Height: ");
  scanf("%d", &height);

  if (base > 0 && height > 0)
  {
    result = (base * height) / 2;

    printf("The Area is: %lf", result);

    return;
  }

  printf("Only accept round number, you input base: %d and height: %d", base, height);
}

void main()
{
  triangle();
}