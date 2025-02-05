#include <bits/stdc++.h>
using namespace std;

template <typename T>
struct Node
{
  T value;
  Node *next;
};

template <typename T>
class Stack
{
private:
  Node<T> *head;
  Node<T> *top;

public:
  Stack()
  {
    this->head = nullptr;
  }
  ~Stack()
  {
    for (Node<T> *i = this->head; i != nullptr; i = i->next)
    {
      delete i;
    }
  }
  bool isEmpty()
  {
    return this->head == nullptr;
  }
  int size()
  {
    int length = 0;
    for (Node<T> *i = this->head; i != nullptr; i = i->next)
    {
      length++;
    }
    return length;
  }
  void push(T value)
  {
    Node<T> *node = new Node<T>;
    node->value = value;
    if (this->head == nullptr)
    {
      this->head = node;
      return;
    }
    Node<T> lastNode = this->head;
    while (lastNode->next != nullptr)
    {
      lastNode = lastNode->next;
    }
    lastNode->next = node;
  }
  T peek()
  {
    return this->head->value;
  }
  T pop()
  {
    Node<T> *element = this->head;
    this->head = this->head->next;
    T value = element->value;
    delete element;
    return value;
  }
  void display()
  {
    for (Node<T> *i = this->head; i != nullptr; i = i->next)
    {
      cout << i->value << endl;
    }
  }
};

int main()
{
  Stack<string> s;
  s.push("uwu");
  s.push(">w<");
  s.push("qwq");
  s.pop();
  s.display();
}