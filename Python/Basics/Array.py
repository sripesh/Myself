from array import *
from string import Template

class Ar:
    def __init__(self):
        self.arr=array('i',[])
        n=input("Enter the size of the array:\n")

        print("Input Elements:")
        for i in range(int(n)):
            self.arr.append(int(input("=>")))

    def disp(self):
        print("Elements in the array:")
        for i in range(len(self.arr)):
            print(str(self.arr[i])+"\t",end='')
        print()

    def bsort(self):
        x=len(self.arr)
        for i in range(x-1):
            for j in range(x-i-1):
                if self.arr[j]>self.arr[j+1]:
                    self.arr[j],self.arr[j+1]=self.arr[j+1],self.arr[j]
p=1
a=Ar()
while p==1:
    print("Enter the choice:\n1:Sort\n2:Reverse\n3:Print\n4:Delete\n5:Insert")
    ch=int(input())
    if ch==2:
        a.arr.reverse()
    elif ch==1:
        a.bsort()
    elif ch==3:
        a.disp()
    elif ch==4:
        a.arr.pop()
    elif ch==5:
        a.arr.append(int(input("=>")))
    p=int(input("Do you want to continue (1/0)?\n"))
