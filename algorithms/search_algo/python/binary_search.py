print("enter the limit")
N = int(input())
Arr = []
for i in range(N):
    num = int(input())
    Arr.append(num)
print("enter the element to be searched")
value = int(input())
Arr.sort()
begin,end = 0,N
mid = (begin + end)//2
while(begin < end):
        if Arr[mid] == value:
            print("Value found at ",mid)
            break
        elif Arr[mid] > value:
            end = mid - 1
            mid = (begin + end)//2
        elif Arr[mid] < value:
            begin = mid + 1
            mid = (begin + end)//2
if begin > end:
    print("Value not found")
