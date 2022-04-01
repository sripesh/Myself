from tkinter import *
root=Tk()
root.title("Basic Calculator")

def b_click(num):
    cnum=text.get()
    text.delete(0,END)
    text.insert(0, str(cnum)+str(num))
def b_clear():
    text.delete(0,END)
    t=0
def b_add():
    global t
    global op
    t=float(text.get())
    op="+"
    text.delete(0,END)
def b_sub():
    global t
    global op
    t=float(text.get())
    op="-"
    text.delete(0,END)
def b_mul():
    global t
    global op
    t=float(text.get())
    op="*"
    text.delete(0,END)
def b_div():
    global t
    global op
    t=float(text.get())
    op="/"
    text.delete(0,END)
def b_mod():
    global t
    global op
    t=float(text.get())
    op="%"
    text.delete(0,END)

def b_result():
    cnum=float(text.get())
    text.delete(0,END)
    global t
    global op
    if op=="+":
        t=t+cnum
    elif op=="-":
        t=t-cnum
    elif op=="*":
        t=t*cnum
    elif op=="/":
        t=t/cnum
    elif op=="%":
        t=t%cnum
    text.insert(0, t)


text=Entry(root,width=50,borderwidth=6)
text.grid(row=0,column=0,columnspan=4)

mod=Button(root,text="%",padx=28,pady=20,command=b_mod).grid(row=1,column=0,columnspan=1)
div=Button(root,text="/",padx=30,pady=20,command=b_div).grid(row=1,column=1,columnspan=1)
mul=Button(root,text="*",padx=30,pady=20,command=b_mul).grid(row=1,column=2,columnspan=1)
sub=Button(root,text="-",padx=30,pady=20,command=b_sub).grid(row=1,column=3,columnspan=1)

b7=Button(root,text="7",padx=30,pady=20,command=lambda:b_click(7)).grid(row=2,column=0,columnspan=1)
b8=Button(root,text="8",padx=30,pady=20,command=lambda:b_click(8)).grid(row=2,column=1,columnspan=1)
b9=Button(root,text="9",padx=30,pady=20,command=lambda:b_click(9)).grid(row=2,column=2,columnspan=1)

add=Button(root,text="+",padx=30,pady=54,command=b_add).grid(row=2,column=3,rowspan=2)

b4=Button(root,text="4",padx=30,pady=20,command=lambda:b_click(4)).grid(row=3,column=0,columnspan=1)
b5=Button(root,text="5",padx=30,pady=20,command=lambda:b_click(5)).grid(row=3,column=1,columnspan=1)
b6=Button(root,text="6",padx=30,pady=20,command=lambda:b_click(6)).grid(row=3,column=2,columnspan=1)

b1=Button(root,text="1",padx=30,pady=20,command=lambda:b_click(1)).grid(row=4,column=0,columnspan=1)
b2=Button(root,text="2",padx=30,pady=20,command=lambda:b_click(2)).grid(row=4,column=1,columnspan=1)
b3=Button(root,text="3",padx=30,pady=20,command=lambda:b_click(3)).grid(row=4,column=2,columnspan=1)

eq=Button(root,text="=",padx=30,pady=54,command=b_result).grid(row=4,column=3,rowspan=2)

b0=Button(root,text="0",padx=30,pady=20,command=lambda:b_click(0)).grid(row=5,column=0,columnspan=1)
clear=Button(root,text="Clear",padx=56,pady=20,command=b_clear).grid(row=5,column=1,columnspan=2)

root.mainloop()