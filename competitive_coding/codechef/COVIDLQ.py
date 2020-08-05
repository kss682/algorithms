def check_line(array,N):
	check_line = 1
	counter_flag = 0
	counter = 0
	for val in array:
		if val == 1 and counter_flag == 0:
			counter_flag = 1
		elif val == 0 and counter_flag == 1:
			counter += 1
		elif val == 1 and counter_flag == 1:
			counter += 1
			if counter >= 6:
				counter = 0
			else:
				check_line = 0
				break
	if check_line == 1:
		print("YES")
	else:
		print("NO")




T = int(input())
while T > 0:
	N = int(input())
	array = input()
	array = [int(num) for num in array.split(" ")]
	check_line(array,N)
	T -= 1
