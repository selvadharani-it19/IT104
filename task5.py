def multiple(lim):
 sum=0
 for i in range(0,lim+1):
  if(i%3==0 or i%5==0):
   print(i)
   sum=sum+i
 return sum
n=int(input("enter the limit"))
c=(multiple(n))
print("sum",c)
