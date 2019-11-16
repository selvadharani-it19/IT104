def speed(a):
 d=0
 if(a<70):
  print("ok")
 elif(a>=70):
  c=a-70
  if(c%5==0):
   if(c<12):
    print("points",c)
   else:
    print("License suspended")
n=int(input("enter the speed"))
(speed(n))
