from collections import deque

class Node:
  def __init__(self, value):
    self.value = value
    self.left = None
    self.right = None

class BST:
  def __init__(self):
    self.root = None

  def _insert(self, node, value):
    if value < node.value:
      if node.left == None:
        node.left = Node(value)
      else:
        self._insert(node.left, value)
    else:
      if node.right == None:
        node.right = Node(value)
      else:
        self._insert(node.right, value)

  def insert(self, value):
    if self.root == None:
      self.root = Node(value)
      return
    self._insert(self.root, value)

  def _inorder(self, node):
    if node:
      self._inorder(node.left)
      print(node.value, end=' ')
      self._inorder(node.right)

  def inorder(self):
    self._inorder(self.root)

  def _preorder(self, node):
    if node:
      print(node.value, end=' ')
      self._preorder(node.left)
      self._preorder(node.right)

  def preorder(self):
    self._preorder(self.root)

  def _postorder(self, node):
    if node:
      self._postorder(node.left)
      self._postorder(node.right)
      print(node.value, end=' ')

  def post_order(self):
    self.post_order(self.root)

  def height(self):
    if self.root is None:
      return -1
    
    queue = deque([self.root])
    height = -1

    while queue:
      level_size = len(queue)
      for _ in range(level_size):
        node = queue.popleft()
        if node.left:
            queue.append(node.left)
        if node.right:
            queue.append(node.right)
      height += 1
    
    return height

t = BST()
for x in [5]:
  t.insert(x)
t.inorder()
print("Height", t.height())