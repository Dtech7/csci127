#Name: Neil Felix
#Date: November 2017
#info: 

import turtle
import random

trey = turtle.Turtle()
trey.speed(10)

for i in range(100):
  trey.forward(10)
  a = random.randrange(0,360)
  trey.right(a)
