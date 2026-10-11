# CSC 134
# M4T2 - Turtles and Loops
# josea
# 10/7/26


# set up the turtle
# (choose your own colors)


import turtle
win = turtle.Screen()
win.bgcolor("lightblue")
# set turtle config
t = turtle.Turtle()
t.color("white")
t.pencolor("darkblue")
t.shape("turtle")
t.pensize(3)


# DRAW YOUR PICTURE HERE
# option 1 - for loop
    #sides = 100
    #length = 5
    #angle = 360 / sides    # angles add to 360 in any poulgen
   # t.begin_fill() # starting filling in shapes
    #for side in range(sides):
    #    t.forward(length)
   #     t.right(angle)
    #t.end_fill()




t.teleport(150,150) # or, t.penup() , t.goto(). t.pendown
with t.fill():        # same as t.beginfill() then t.endfill() after
    t.circle(50)
   
t.teleport(-150,-150) # or, t.penup() , t.goto(). t.pendown
with t.fill():        # same as t.beginfill() then t.endfill() after
    t.circle(50)


t.teleport(-150,150) # or, t.penup() , t.goto(). t.pendown
with t.fill():        # same as t.beginfill() then t.endfill() after
    t.circle(50)


t.teleport(150,-150) # or, t.penup() , t.goto(). t.pendown
with t.fill():        # same as t.beginfill() then t.endfill() after
    t.circle(50)


t.teleport(-50,-25)
for i in (1,2,3,4,5):
    # turn the other direction, so the triangle's on the outside
    for j in (1,2,3):
        t.forward(100)
        t.right(120)
    t.forward(100)
    t.left(72)


win.mainloop()

