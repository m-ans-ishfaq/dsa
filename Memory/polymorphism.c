#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef void (*CatAction)(struct Cat *);

typedef struct Cat
{
  char name[50];
  int age;
  CatAction action;
  int (*getAge)(struct Cat *);
} Cat;

void catMeow(Cat *cat)
{
  printf("%s says: Meow!\n", cat->name);
}

void catBite(Cat *cat)
{
  printf("%s bites you: AARRGHHHH!");
}

void catCry(Cat *cat)
{
  printf("%s weeps: RURURURURURURUU!");
}

int catGetAge(Cat *cat)
{
  return cat->age;
}

Cat newCat(const char *name, int age, CatAction meowBehavior)
{
  Cat billi;
  billi.action = meowBehavior;
  billi.getAge = catGetAge;
  snprintf(billi.name, sizeof(billi.name), name);
  billi.age = age;
  return billi;
}

int main()
{
  Cat angryKatto = newCat("X12", 4, catBite);
  Cat saneKatto = newCat("AE4", 1, catMeow);
  Cat cryKatto = newCat("M24", 8, catCry);

  angryKatto.action(&angryKatto);
  saneKatto.action(&saneKatto);
  cryKatto.action(&cryKatto);

  return 0;
}