#include <stdio.h>

void main()
{
  int age = 19;
  double money = 12.500;
  float score = 7.5;
  char character = "B";
  char name[] = "Huda Prasetyo";
  const float PI = 3.14;

  printf("Name %s\n", name);
  printf("Age %d,\nMoney %lf,\nScore %f,\nCharacter %c,\nPI %f", age, money, score, character, PI);
};