def prime(lim):
 c=0
 for i in range(0,lim+1):
  for j in range(1,i+1):
   if(i%j==0):
    c=c+1
  if(c==2):
   print(i)
  c=0
n=int(input("enter the limit"))
(prime(n))
