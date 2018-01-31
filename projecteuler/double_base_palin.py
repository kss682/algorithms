def palin(i):
  a,s=i,0
  while(a!=0):
    b=a%10
    a=a//10
    s=s*10+b
  return s  

def base(i,K):
  d,t=i,0
  while(d!=0):
      e=d%K
      d=d//K
      t=t*10+e
  return t  
    



N,K=map(int,input().split())
S=0
for i in range(1,N+1):
  c=palin(i)
  if(i==c and i%K!=0):
      f=base(i,K)
      g=palin(f)
      if(f==g):
        S=S+i
print(S)      
