
def optimize(array):
	price = 0
	array.sort()
	array = array[::-1]
	for i in range(len(array)):
		cost = (array[i] - i)
		if cost < 0:
			cost = 0
		price += cost
	price = price%(10**9 + 7)
	print(price) 
	
T = int(input())
while T > 0:
	N = int(input())
	array = input()
	array = [int(num) for num in array.split(" ")]
	optimize(array)
	T -= 1	
