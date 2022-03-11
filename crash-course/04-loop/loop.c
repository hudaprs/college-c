#include <stdio.h>

void forLoop()
{
  for (int i = 0; i <= 10; i++)
  {
    printf("%d\n", i);
  }
}

void whileLoop()
{
  int i = 0;

  while (i <= 10)
  {
    printf("%d\n", i);
    i++;
  }
}

void doWhileLoop()
{
  int i = 0;

  do
  {
    printf("%d\n", i);
    i++;
  } while (i <= 10);
}

void breakLoop()
{
  int i = 0;

  do
  {
    i++;

    if (i > 5)
    {
      break;
    }
    else
    {
      printf("%d\n", i);
      continue;
    }
  } while (i <= 10);
}

void main()
{
  // For Loop
  // forLoop();

  // While Loop
  // whileLoop();

  // Do While Loop
  // doWhileLoop();

  // Break Loop
  // breakLoop();
}