def fibRecursive(n):
  if n <= 2:
    return 1
  return fibRecursive(n-1) + fibRecursive(n-2)

def fibIterative(n):
  pass


# print(fibRecursive(40))
print(fibIterative(40))