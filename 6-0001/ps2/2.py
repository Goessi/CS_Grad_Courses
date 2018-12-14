# -*- coding: utf-8 -*-
"""
Created on Mon Nov 19 20:05:22 2018

@author: JingQIN
"""

# lecture 3
s = 'abc'
print(len(s))

s = 'abcdefgh'
print(s[3:6])
print(s[3:6:2])
print(s[::])
print(s[::-1])
print(s[4:1:-2])

s = 'hello'
#s[0] = 'i' ,string is immutable
s = 'y' + s[1:]

s = 'abcdefgh'
for index in range(len(s)):
    if s[index] == 'i' or s[index] == 'u':
        print("There is an i or u")
        
for char in s:
    if char == 'j' or char == 'u':
        print("There is an i or u")
        
# algorithm
# guess and check - cube root
cube = 8
for guess in range(cube+1):
    if guess**3 == cube:
        print("Cube root of", cube, "is", guess)
        
cube = 8
for guess in range(abs(cube) + 1):
    if guess**3 >= abs(cube):
        break
if guess**3 != abs(cube):
    print(cube, 'is not a perfect cube')
else:
    if cube < 0:
        guess = - guess
    print('Cube root of '+str(cube)+' is '+str(guess))

# approximate solution - cube root
cube = 27
epsilon = 0.01
guess = 0.0
increment = 0.0001
num_guesses = 0
while abs(guess**3 - cube) >= epsilon:
    guess += increment
    num_guesses += 1
print('num_guesses =', num_guesses)
if abs(guess**3 - cube) >= epsilon:
    print('Failed on cube root of', cube)
else:
    print(guess, 'is close to the cube root of', cube)
    
# bisection search - cube root
cube = 27
epsilon = 0.01
num_guesses = 0
low = 0
high = cube
guess = (high + low)/2.0
while abs(guess**3 - cube) >= epsilon:
    if guess**3 < cube:
        low = guess
    else:
        high = guess
    guess = (high + low)/2.0
    num_guesses += 1
print('num_guesses =', num_guesses)
print(guess,'is the cube root of', cube)

    
    