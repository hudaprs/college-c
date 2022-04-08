#include <stdio.h>

int main()
{
  char letter;
  int flag, exit_flag;

  // Enter Letter
  printf("Enter letter: ");
  scanf("%c", &letter);

  // Enter Flag
  printf("Enter flag: ");
  scanf("%d", &flag);

  if (flag == 1 || letter != 'X')
  {
    exit_flag = 0;
  }
  else
  {
    exit_flag = 1;
  }

  printf("The Result of exit_flag is: %d", exit_flag);

  return 0;
}