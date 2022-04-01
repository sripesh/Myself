from tkinter import *
root=Tk()
def Click():
    lable=Label(root,text="You Clicked me!")
    lable.pack()
button=Button(root,text="Click Me",command=Click)
button.pack()
root.mainloop()