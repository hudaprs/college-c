#include <stdio.h>

int main()
{
  char letter;
  int sum = 0, valid_flag = 0;

  printf("Enter letter: ");
  scanf("%c", &letter);

  switch (letter)
  {
  case 'X':
    sum = 0;
    break;
  case 'Z':
    valid_flag = 1;
    break;
  case 'A':
    sum = 1;
  default:
    printf("Uknown Letter: %c \n", letter);
    return 0;
  }

  printf("Sum: %d \n", sum);
  printf("Valid Flag: %d \n", valid_flag);

  return 0;
}