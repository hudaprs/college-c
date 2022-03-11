#include <stdio.h>

void goTo()
{
  int i;

  for (i = 0; i <= 10; i++)
  {
    if (i == 6)
    {
      goto RENDER_SIX;
    }
    else
    {
      printf("%d\n", i);
    }
  }

RENDER_SIX:
  printf("INSIDE GOTO, %d", i);
}

void main()
{
  goTo();
}