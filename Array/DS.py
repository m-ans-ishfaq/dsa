class StaticArray:
  def __init__(self, size):
    self.arr = [None] * size
  def get(self, index):
    return self.arr[index]
  def set(self, index, val):
    self.arr[index] = val

arr = StaticArray(10)
arr.set(1,5)
print(arr.get(1))