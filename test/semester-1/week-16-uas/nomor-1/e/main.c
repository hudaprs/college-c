#include <stdio.h>

int main() {
  char characters[5][5] = { 
    {NULL, NULL, NULL, NULL, 'A'},
    {NULL, NULL, NULL, 'B', 'C'},
    {NULL, NULL, 'D', 'E', 'F'},
    {NULL, 'G', 'H', 'I', 'J'},
    {'K', 'L', 'M', 'N', 'O',} 
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