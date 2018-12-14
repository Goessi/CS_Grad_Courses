# -*- coding: utf-8 -*-
import random
import math
import numpy
print(random.randint(16,272))
print(type(3))
print(type(3.0))
print(float(3))
print(int(3.9))

pi = 3.14159
radius = 2.2
area = pi*(radius*2)
print(area)

print(16**0.5)
print(math.sqrt(16))
print(math.log(16,2))
print(math.cos(0))

print(6+4*10)
print((6+4)*10)
print(23**5)

# output of 34*x^2+68*x-510
x1 = (-68+math.sqrt(68**2 - 4*34*(-510)))/(2*34)
x2 = (-68-math.sqrt(68**2 - 4*34*(-510)))/(2*34)
print(x1)
print(x2)

# assignment 0
input1 = int(input("Enter number x:"))
input2 = int(input("Enter number y:"))
print("x**y = ",input1**input2)
print("log(x) = ",numpy.log2(input1))