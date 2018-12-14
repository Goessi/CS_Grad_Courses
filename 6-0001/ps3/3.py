# -*- coding: utf-8 -*-
"""
Spyder Editor
MIT 6-0001 lecture 4
Jing QIN
"""

def f(x):
    x = x + 1
    print('in f(x): x =',x)
    return x

x = 3
z = f(x)

def is_even_with_return( i ):
    '''
    Input: i, a positive int
    Returns True if i is even, otherwise False
    '''
    print('with return')
    remainder = i%2
    return remainder == 0

is_even_with_return(3)
print(is_even_with_return(3))

def is_even_without_return( i ):
    '''
    Input: i, apositive int
    Does not return anything
    '''
    print('without return')
    remainder = i%2

is_even_without_return(3)
print(is_even_without_return(3))

def func_a():
    print('inside func_a')
def func_b(y):
    print('inside func_b')
    return y
def func_c(z):
    print('inside func_c')
    return z()
print(func_a())
print(5+ func_b(2))
print(func_c(func_a))
    