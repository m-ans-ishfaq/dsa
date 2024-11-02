void swap(int a, int b)
{
  a = a + b;
  b = a - b;
  a = a - b;
}

/*
a := 5
b := 10
  a = a + b = 5 + 10 = 15
  b = a - b = 15 - 10 = 5
  a = a - b = 15 - 5 = 10
a := 10
b := 5
*/