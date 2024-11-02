class Stack:
  def __init__(self, size):
    self.length = size
    self.top = -1
    self.arr = [None] * size

  def is_empty(self):
    return self.top == -1
  
  def is_full(self):
    return self.top == self.length - 1
  
  def push(self, element):
    if not self.is_full():
      self.top += 1
      self.arr[self.top] = element
      
  def pop(self):
    if not self.is_empty():
      element = self.arr[self.top]
      self.arr[self.top] = None
      self.top -= 1
      return element