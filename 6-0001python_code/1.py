# -*- coding: utf-8 -*-
"""
Created on Sun Nov 18 09:48:46 2018

@author: JingQIN
"""

hi = "hello"
name = "JingQIN"
greet = hi + name
greeting = hi + " " + name
print(greet)
print(greeting)
silly = hi + (" " + name)*3
print(silly)

# comma adds space while concatenation not
x = 1
print(x)
x_str = str(x)
print("my fav num is", x, ".", "x = ", x)
print("my fav num is " + x_str + ". " + "x = " + x_str) # need to be same type

# input ives you a string so need to be casted
text = input("Type anything... ")
print(5*text)

num = int(input("Type a number... "))
print(5*num)

x = float(input("Enter a number for x: "))
y = float(input("Enter a number for y: "))
if x==y:
    print("x and y are equal")
    if y!= 0:
        print("therefore, x / y is", x/y)
elif x < y:
    print("x is smaller")
else:
    print("y is smaller")
print("thanks")

# the Lost Forest
count = 0
n = input("You're in the Lost Forest. Go left or right? ")
while n == "right" :
    count += 1
    if count == 2:
        print("******\n******\n (T.T) \n******\n")
    n = input("You're in the lost forest.Go left or right?")
print("You got out of the Lost Forest")

# range(start, stop, step)
mysum = 0
for i in range(7, 10):
    mysum += i
print(mysum)

mysum = 0
for i in range(5, 11, 2):
    mysum += i
print(mysum)