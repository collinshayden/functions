#finds all primes from 2 to bound, returns a list
from math import sqrt, ceil
import timeit, numpy as np
start = timeit.default_timer()

def seive(bound):
  boolArr = np.zeros(bound)
  primeArr = []
  boolArr[0] = False; boolArr[1] = False#seive starts at 2, and 0 and 1 are not prime. 

  for i in range(2,bound): 
    boolArr[i] = True#sets all to true

  for a in range(2,ceil(sqrt(bound))+1):
    if boolArr[i]:
      for j in range(a*a, bound, a):
        boolArr[j] = False#sets non primes to false
  
  for p in range(len(boolArr)):
    if boolArr[p] == True:
      primeArr.append(p)

  return primeArr

print(seive(20))

stop = timeit.default_timer()
print('Time: ',stop-start)
