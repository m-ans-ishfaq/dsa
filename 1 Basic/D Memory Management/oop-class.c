#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Cat
{
  char name[50];
  int age;
  void (*meow)(struct Cat *);
  int (*getAge)(struct Cat *);
} Cat;

void catMeow(Cat *cat)
{
  printf("%s says: Meow!\n", cat->name);
}

int catGetAge(Cat *cat)
{
  return cat->age;
}

Cat newCat(const char *name, int age)
{
  Cat billi;
  billi.meow = catMeow;
  billi.getAge = catGetAge;
  snprintf(billi.name, sizeof(billi.name), name);
  billi.age = age;
  return billi;
}

int main()
{
  Cat katto = newCat("billo bagga billa", 69);
  katto.meow(&katto);
  return 0;
}