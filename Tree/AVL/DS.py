class Node:
  def __init__(self, val):
    self.value = val
    self.height = 0
    self.left = None
    self.right = None
  
  def get_balancing_factor(self):
    left_height = right_height = 0
    if self.left:
      left_height += self.left.height
    if self.right:
      right_height += self.right.height
    return abs(left_height - right_height)


class AVLTree:
  def __init__(self):
    self.root = None

  def left_rotate(self, y):
    x = y.left
    t2 = x.right
    x.right = y
    y.left = t2
    return x

  def right_rotate(self, x):
    y = x.right
    t2 = y.left
    y.left = x
    x.right = t2
    return y
  
