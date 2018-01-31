import sys

def solve(grades):
    # Complete this function
    for i in range(n):
      h=0
      if(grades[i]>=38):
        h=grades[i]
        for j in range(1,3):
          h=h+1
          if(h%5==0):
            grades[i]=h
            break
    return grades    
        
        
n = int(input().strip())
grades = []
grades_i = 0
for grades_i in range(n):
   grades_t = int(input().strip())
   grades.append(grades_t)
result = solve(grades)
print ("\n".join(map(str, result)))

