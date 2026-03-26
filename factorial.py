def factorialRecursive(n):
  if n == 0:
    return 1
  return n * factorialRecursive(n-1)

def factorialIterative(n):
  result = 1
  stack = [n]

  while stack:
    x = stack.pop()

    if x == 0:
      continue
    
    result *= x
    stack.append(x-1)
  
  return result