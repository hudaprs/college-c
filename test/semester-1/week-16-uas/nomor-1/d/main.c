#include <stdio.h>

int main() {
  char characters[5][5] = { 
    {'A', 'B', 'C', 'D', 'E'},
    {NULL, 'F', 'G', 'H', 'I'},
    {NULL, NULL, 'J', 'K', 'L'},
    {NULL, NULL, NULL, 'M', 'N'},
    {NULL, NULL, NULL, NULL, 'O'} 
  };
  int loop;

  for (int i = 0; i < 5; ++i)
  {
    for (int j = 0; j < 5; ++j)
    {
      printf("%c ", characters[i][j]);
    }
    printf("\n");
  }

  return 0;
}