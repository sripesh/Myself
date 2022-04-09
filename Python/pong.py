import turtle
root=turtle.Screen()
root.bgcolor("black")
root.setup(width=1000,height=700)
root.tracer(0)

p1=turtle.Turtle()
p1.speed(0)
p1.shape("square")
p1.color("white")
p1.penup()
p1.goto(-450,0)
p1.shapesize(stretch_wid=6,stretch_len=1)

p2=turtle.Turtle()
p2.speed(0)
p2.shape("square")
p2.color("white")
p2.penup()
p2.goto(450,0)
p2.shapesize(stretch_wid=6,stretch_len=1)

b=turtle.Turtle()
b.speed(0)
b.shape("circle")
b.color("white")
b.penup()
b.goto(0,0)

def up_1():
    y=p1.ycor()
    y+=20
    p1.sety(y)
def down_1():
    y=p1.ycor()
    y-=20
    p1.sety(y)

def up_2():
    y=p2.ycor()
    y+=20
    p2.sety(y)
def down_2():
    y=p2.ycor()
    y-=20
    p2.sety(y)

root.listen()
root.onkeypress(up_1,"w")
root.onkeypress(up_2,"Up")

root.onkeypress(down_1,"s")
root.onkeypress(down_2,"Down")

while True:
    root.update()