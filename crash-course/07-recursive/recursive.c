#include <stdio.h>

int sum(int incrementor);

int sum(int incrementor)
{
  if (incrementor != 0)
    return incrementor + sum(incrementor - 1);
  else
    return incrementor;
}

void main()
{
  int number, result;

  printf("Enter Positive Number: ");
  scanf("%d", &number);

  result = sum(number);

  printf("sum = %d", result);

  return 0;
}
