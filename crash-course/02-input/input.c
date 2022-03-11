#include <stdio.h>

void inputName()
{
  char name[100];

  printf("Input your name: ");
  scanf("%s", &name);
  printf("Your name is %s", name);
}

void inputNumbers()
{
  int age;
  double money;

  printf("Enter Your Age: ");
  scanf("%d", &age);
  printf("Enter Your Money: ");
  scanf("%lf", &money);

  printf("Your Age %d and Your Money %lf", age, money);
}

void main()
{
  // Single Input - Input Your Name
  // inputName();

  // Double Input - Input Numbers
  inputNumbers();
}