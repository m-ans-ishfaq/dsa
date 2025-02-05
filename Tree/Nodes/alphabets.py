from Tree.Nodes.node import Node

#       a
#    b     c
#  d  e      g
# f

a = Node('a')
b = Node('b')
c = Node('c')
d = Node('d')
e = Node('e')
f = Node('f')
g = Node('g')
a.left = b
a.right = c
b.left = d
b.right = e
d.left = f
c.right = g