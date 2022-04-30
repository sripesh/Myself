import turtle
try:
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
    b.dx=0.3
    b.dy=0.3

    pen=turtle.Turtle()
    pen.hideturtle()
    pen.speed(0)
    pen.color("white")
    pen.penup()
    pen.goto(0,320)

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

    s1=0
    s2=0
    pen.write("Player 1:{}  Player 2:{}".format(s1,s2))
    
    root.listen()
    root.onkeypress(up_1,"w")
    root.onkeypress(up_2,"Up")

    root.onkeypress(down_1,"s")
    root.onkeypress(down_2,"Down")

    while True:
        root.update()
        b.sety(b.ycor()+b.dy)
        b.setx(b.xcor()+b.dx)
        if b.ycor()>=350:
            b.dy*=-1
        if b.xcor()>=500:
            b.goto(0,0)
            b.dx*=-1
            s1=s1+1
            pen.clear()
            pen.write("Player 1:{}  Player 2:{}".format(s1,s2))
        if b.ycor()<=-350:
            b.dy*=-1
        if b.xcor()<=-500:
            b.goto(0,0)
            b.dx*=-1
            s2=s2+1
            pen.clear()
            pen.write("Player 1:{}  Player 2:{}".format(s1,s2))
        if (b.ycor()<p1.ycor()+54 and b.ycor()>p1.ycor()-54)and(b.xcor()>-450 and b.xcor()<-440):
            b.setx(-440)
            b.dx*=-1
        if (b.ycor()<p2.ycor()+50 and b.ycor()>p2.ycor()-50)and(b.xcor()<450 and b.xcor()>440):
            b.setx(440)
            b.dx*=-1
except:
    print("Invalid Exit")