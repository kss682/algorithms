print("enter the limit")
N = int(input())
Arr = []
for i in range(N):
    num = int(input())
    Arr.append(num)
print("enter the element to be searched")
value = int(input())
flag = 0
for i in range(N):
    if Arr[i] == value:
        flag = 1
        print("Value found at ",i)
if flag == 0: print("Value not found")
