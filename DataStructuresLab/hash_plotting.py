import matplotlib.pyplot as plt

Array=[]
KEY=[]
INDEX=[]

Max=int(input("enter the number of keys\n"))

for i in range(Max):
	num=int(input())
	i=num%Max
	Array[i]=num

for i in range(Max):
	KEY.append(Array[i])
	INDEX.append(i)

plt.plot(KEY,INDEX)
plt.show()
