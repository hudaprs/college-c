#include <stdio.h>

void condition()
{
  int number;

  printf("Enter some phone number > 0: ");
  scanf("%d", &number);

  if (number > 0)
  {
    printf("Your number: %d", number);

    return;
  }

  printf("You must enter greather than 0");
}

void main()
{
  condition();
}
