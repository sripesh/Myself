class Student:
    def __init__(self):
        self.name=input("Enter Name:")
        self.age=input("Enter Age:")
    def disp(self):
        print("Student Name:"+self.name)
        print("Student Age:"+self.age)

st=[]

n=input("Enter the number of Students:")

for i in range(int(n)):
    st.append(Student())


for ob in st:

    print()
    ob.disp()
    