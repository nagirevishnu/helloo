n=int(input("enter the number:"))
rem=0
res=0
while n:
    rem=n%10
    res=res*10+rem
    n/=10
if res==n:
    print("palindrome")
else:
    print("not")

