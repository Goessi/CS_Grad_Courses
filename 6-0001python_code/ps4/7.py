# -*- coding: utf-8 -*-
"""
Created on Tue Dec  4 09:14:52 2018
MIT 6-0001 lecture 8
@author: JingQIN
"""

# special method called __init__ to initialize some data attributes
class Coordinate(object):
    def __init__(self, x, y):
        self.x = x
        self.y = y
        
    def distance(self, other):
        x_diff_sq = (self.x - other.x)**2
        y_diff_sq = (self.y - other.y)**2
        return (x_diff_sq + y_diff_sq)**0.5
    
    # print object
    def __str__(self):
        return "<" + str(self.x) + "," + str(self.y) + ">"
    
    # python basic customization
    def __add__(self, other):
        pass
    
    def __sub__(self, other):
        pass
    
    def __eq__(self, other):
        pass
    
    def __lt__(self, other):
        pass
    
    def __len__(self):
        pass
    
        
c = Coordinate(3, 4)
origin = Coordinate(0, 0)
print(c.x)
print(origin.x)
print(c)
print(isinstance(c, Coordinate))

class Fraction(object):
    
    def __init__(self, num, denom):
        assert type(num) == int and type(denom) == int
        self.num = num
        self.denom = denom
        
    def __str__(self):
        return str(self.num) + "/" + str(self.denom)
    
    def __add__(self, other):
        top = self.num*other.denom + self.denom*other.num
        bott = self.denom*other.denom
        return Fraction(top, bott)
    
    def __sub__(self, other):
        top = self.num*other.denom - self.denom*other.num
        bott = self.denom*other.denom
        return Fraction(top, bott)
    
    def __float__(self):
        return self.num/self.denom
    
    def inverse(self):
        return Fraction(self.denom, self.num)

a = Fraction(1,4)
b = Fraction(3,4)
c = a + b
print(c)
print(float(c))
print(Fraction.__float__(c))
print(float(b.inverse()))
    