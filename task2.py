def fizzbuzz(a):
 if(a%3==0 and a%5==0):
   c="FIZZBUZZ"
 elif(a%3==0):
   c="FIZZ"
 elif(a%5==0):
   c="BUZZ"
 else:
   c=a
 return c
n=int(input("enter th no"))
print(fizzbuzz(n))
