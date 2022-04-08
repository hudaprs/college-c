#include <stdio.h>

void main()
{
  const int answer = 5;
  int guessNumber;

  printf("Enter your guess number: ", &guessNumber);
  scanf("%d", &guessNumber);

  if (guessNumber == answer)
  {
    printf("Congratulations, you guess is right, %d", answer);
  }
  else
  {
    printf("Aww, your input is %d, is actually wrong", guessNumber);
  }
}