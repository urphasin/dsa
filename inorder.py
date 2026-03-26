class NODE:
  def __init__(this, val=0):
    this.val = val
    this.left = None
    this.right = None

def inorderRecursive(root: NODE) -> None:
  if root == None:
    return
  inorderRecursive(root.left)
  print(root.val, end=" ")
  inorderRecursive(root.right)

def inorderIterative(root: NODE) -> None:
  pass


# crete nodes
A = NODE("A")
B = NODE("B")
C = NODE("C")
D = NODE("D")
E = NODE("E")
F = NODE("F")
G = NODE("G")
H = NODE("H")
I = NODE("I")
J = NODE("J")
K = NODE("K")
L = NODE("L")
M = NODE("M")
N = NODE("N")
O = NODE("O")


# connect nodes
A.left = B
A.right = C


B.left = D
B.right = E


C.left = F
C.right = G

D.left = H
D.right = I

E.left = J
E.right = K

F.left = L
F.right = M

G.left = N
G.right = O




# core
if __name__ == "__main__":
  root = A

  inorderRecursive(root=root)
  print("\nEnd of Recursive Program\n")

  inorderIterative(root=root)
  print("\nEnd of Iterative Program\n")
