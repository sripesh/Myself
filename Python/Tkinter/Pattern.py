from tkinter import *

root=Tk()
root.title("Pattern")
root.geometry("500x700")
root.configure(bg="#fb2bff")

def pattern():
    a=""
    x=int(c.get())
    n=int(entry.get())
    if x==1:
        for i in range(0,n):
                for j in range(0,n):
                    a=a+"0 "
                a=a+"\n"
    elif x==2:
        for i in range(0,n):
                for j in range(0,n):
                    if i==0 or i==n-1 or j==0 or j==n-1:
                        a=a+"0 "
                    else:
                        a=a+"  "
                a=a+"\n"
    elif x==3:
        for i in range(0,n):
            for j in reversed(range(0,n-i)):
                a=a+"0 "
            a=a+"\n"
    elif x==4:
        for i in range(0,n):
            for j in reversed(range(0,n-i-1)):
                a=a+" "
            for j in range(0,i+1):
                a=a+"0 "
            a=a+"\n"
    else:
        a="ERROR"
    label.config(text=a)
    

fram=LabelFrame(root,text="Enter the input: ",padx=30,pady=10,bg="#fb2bff")
fram.pack()

entry=Entry(fram,width=50,borderwidth=0,bg="#95c8c9",fg="#301d2e")
entry.pack()

fram1=LabelFrame(root,text="Choose:",padx=40,pady=50,bg="#fb2bff")
fram1.pack()

c=IntVar()
c1=Radiobutton(fram1,text="Pattern 1",value=1,variable=c,bg="#fb2bff")
c1.pack()
c2=Radiobutton(fram1,text="Pattern 2",value=2,variable=c,bg="#fb2bff")
c2.pack()
c3=Radiobutton(fram1,text="Pattern 3",value=3,variable=c,bg="#fb2bff")
c3.pack()
c4=Radiobutton(fram1,text="Pattern 4",value=4,variable=c,bg="#fb2bff")
c4.pack()

def by():
    root.quit()

but=Button(root,text="Print",bg="#95c8c9",fg="#301d2e",command=lambda :pattern()).pack(pady=20)
bexit=Button(root,text="Exit",bg="red",fg="white",command=by).pack(pady=20)

label=Label(root,text="--------------",padx=10,pady=10,bg="#95c8c9",fg="#301d2e")
label.pack(pady=20)

root.mainloop()