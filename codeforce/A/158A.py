
# https://codeforces.com/problemset/problem/158/A

def main():
	N, K = input().split(" ")
	N, K = int(N), int(K)
	array = input()
	array = [int(num) for num in array.split(" ")]
	cut_off = array[K-1]
	count = 0
	for arr in array:
		if arr >= cut_off and arr > 0:
			count += 1
	print(count)

main()
		
		
		
