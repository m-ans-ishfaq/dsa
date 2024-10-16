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
  printf("%d year old '%s' says: Meow!\n", cat->age, cat->name);
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

Cat newBornCat(const char *name)
{
  return newCat(name, 0);
}

int main()
{
  Cat kk = newBornCat("khalid kashmiri");
  kk.meow(&kk);
  Cat ms = newCat("m.sunbul", 55);
  ms.meow(&ms);
  return 0;
}