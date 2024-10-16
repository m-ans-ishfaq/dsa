class StaticArray:
  def __init__(self, size):
    self.arr = [None] * size
  def get(self, index):
    return self.arr[self.index]
  def set(self, index, val):
    self.arr[index] = val