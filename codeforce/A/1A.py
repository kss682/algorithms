# https://codeforces.com/problemset/problem/1/A
nma = input()
n,m,a = [int(num) for num in nma.split(" ")]
if n%a == 0:
	x = n//a
else:
	x = n//a
	x += 1
if m%a == 0:
	y = m//a
else:
	y = m//a
	y += 1
print(x*y)
