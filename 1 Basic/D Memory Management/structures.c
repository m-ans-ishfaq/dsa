#include <stdio.h>
#include <stdlib.h>

// 58 bytes
struct Person
{
  char name[50]; // 50 byte
  int age;       // 4 bytes
  float height;  // 4 bytes
};

int main()
{
  // 58 bytes allocated in stack ~ 60 by padding
  struct Person person1;

  person1.age = 25;
  person1.height = 175.5;
  snprintf(person1.name, sizeof(person1.name), "John Doe");

  printf("Name: %s\n", person1.name);
  printf("Age: %d\n", person1.age);
  printf("Height: %.1f\n", person1.height);

  return 0;
}