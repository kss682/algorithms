import sys

def birthdayCakeCandles(n, ar):
    # Complete this function
    C=0
    big=ar[0]
    for i in range(1,n):
      if(ar[i]>big):
        big=ar[i]
    for i in range(0,n):
      if(big==ar[i]):
        C+=1
    return C    

n = int(input().strip())
ar = list(map(int, input().strip().split(' ')))
result = birthdayCakeCandles(n, ar)
print(result)
