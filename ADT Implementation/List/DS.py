class List:
  def __init__(self):
    self.capacity = 1
    self.length = 0
    self.arr = [None]

  def size(self):
    return self.length
  
  def push(self, element):
    if self.length == self.capacity:
      self.capacity *= 2
      new_arr = [None] * self.capacity
      for i in range(self.length):
        new_arr[i] = self.arr[i]
      self.arr = new_arr
    self.arr[self.length] = element
    self.length += 1
  
  def display(self):
    for x in self.arr:
      if x != None:
        print(x)

v = List()
v.push(1)
v.push(2)
v.push(5)
v.push(6)
v.display()