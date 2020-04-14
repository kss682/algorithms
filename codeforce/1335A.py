# sample https://codeforces.com/problemset/problem/1335/A
T = int(input())
while T > 0:
	N = int(input())
	if N%2 == 0:
		print(N//2-1)
	else:
		print(N//2) 
	T -= 1
