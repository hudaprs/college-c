#include <stdio.h>

void renderPrimeNumber()
{
  int primeNumber;
  int divider = 0;

  printf("Input Prime Number: ");
  scanf("%d", &primeNumber);

  if (primeNumber < 1)
  {
    printf("Please enter positive and greater than 1");
    return;
  }

  for (int i = 1; i <= primeNumber; i++)
  {
    if (primeNumber % i == 0)
    {
      divider++;
    }
  }

  if (divider == 2)
  {
    printf("%d is prime number", primeNumber);
  }
  else
  {
    printf("%d is not prime number", primeNumber);
  }
}

void main()
{
  renderPrimeNumber();
}