#include <stdio.h>

int main() {
  char characters[5][3] = { 
    {'A', 'F', 'K'},
    {'B', 'G', 'L'},
    {'C', 'H', 'M'},
    {'D', 'I', 'N'},
    {'E', 'J', 'O'} 
  };

  for (int i = 0; i < 5; ++i)
  {
    for (int j = 0; j < 3; ++j)
    {
      printf("%c ", characters[i][j]);
    }
    printf("\n");
  }

  return 0;
}