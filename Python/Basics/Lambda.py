from functools import reduce
l=[]
n=int(input("Enter the no. of elements : "))
for i in range(n):
    x=input("=>")
    l.append(int(x))
ch=int(input("Enter the choice\n1:To add the Elements\n2:To multiple the Elements\n3:To print the Even Elements\n4:Double the Odd Elements\n"))
if ch==1:
    print(reduce(lambda a,b:a+b,l))
elif ch==2:
    print(reduce(lambda a,b:a*b, l))
elif ch==3:
    print(list(filter(lambda a:a&1==0, l)))
elif ch==4:
    print(list(map(lambda a:a*2, list(filter(lambda s:s&1==1,l)))))