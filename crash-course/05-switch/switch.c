#include <stdio.h>

void switchCase()
{
  int number, anotherNumber;

  printf("Enter your number: ");
  scanf("%d %d", &number, &anotherNumber);

  switch (number)
  {
  case 1:
    printf("You entered: %d and %d", number, anotherNumber);
    break;
  default:
    printf("You enter invalid number");
  }
}

void main()
{
  switchCase();
}