#include <bits/stdc++.h>
using namespace std;

template <typename T>
class Stack
{
private:
  int length;
  T *data;
  int top;

public:
  Stack(int size)
  {
    this->length = size;
    this->data = new T[size];
    this->top = -1;
  }
  ~Stack()
  {
    delete[] this->data;
  }
  bool isEmpty()
  {
    return this->top == -1;
  }
  bool isFull()
  {
    return this->top == this->length - 1;
  }
  void push(T data)
  {
    if (this->isFull())
      throw out_of_range("Stack is empty");
    this->data[++this->top] = data;
  }
  T pop()
  {
    if (this->isEmpty())
      throw out_of_range("Stack is empty");
    return this->data[this->top--];
  }
  T peek()
  {
    return this->data[this->top];
  }
  void display()
  {
    for (int i = 0; i <= this->top; i++)
    {
      cout << this->data[i] << endl;
    }
  }
};

int main()
{
  Stack<string> plates(10);
  plates.push("S1");
  plates.push("S2");
  plates.push("S3");
  plates.pop();
  plates.display();
}