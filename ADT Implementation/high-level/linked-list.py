class Node:
  def __init__(self, value):
    self.value = value
    self.next = None

class LinkedList:
  def __init__(self):
    self.head = None
  
  def insert(self, index, element):
    new_node = Node(element)
    if index == 0:
      self.head = new_node
      return

    target_node = self.head
    i = 0
    while target_node != None and i < index - 1:
      target_node = target_node.next
      i += 1
    new_node.next = target_node.next
    target_node.next = new_node
  
  def remove(self, index):
    if self.head == None:
      return
    if index == 0:
      self.head = self.head.next
      return
    target_node = self.head
    i = 0
    while target_node != None and i < index - 1:
      target_node = target_node.next
      i += 1
    target_node.next = target_node.next.next

  def display(self):
    node = self.head
    while node != None:
      print(node.value)
      node = node.next

l = LinkedList()
l.insert(0, 1)
l.insert(1, 2)
l.insert(2, 3)
l.display()
