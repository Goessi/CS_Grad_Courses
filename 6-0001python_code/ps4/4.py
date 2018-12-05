# -*- coding: utf-8 -*-
"""
Created on Thu Nov 29 14:34:52 2018
MIT 6-0001 lecture 5
@author: JingQIN
"""

te = ()
t = (2,"mit",3)
t[0]
print((2,"mit",3)+(5,6))
print(t[1:2]) # extra comma means a tuple with one elements
print(t[1:3])
print(len(t))
#t[1] = 4 tuples are immutable

x = 5
y = 7 
(x, y) = (y, x)

def quotient_and_remainder(x, y):
    q = x//y
    r = x%y
    return (q, r)
(quot, rem) = quotient_and_remainder(4, 5)

def get_data(aTuple):
    nums = ()
    words = ()
    for t in aTuple:
        nums = nums + (t[0],)
        if t[1] not in words:
            words = words + (t[1],)
    min_n = min(nums)
    max_n = max(nums)
    unique_words = len(words)
    return (min_n, max_n, unique_words)

test = ((1,'a'),(2,'b'),(1,'a'),(7,'b'))
(a,b,c) = get_data(test)
print('a:',a,'b:',b,'c:',c)

tswift = ((2014,'Katy'),(2014,'Harry'),(2012,'Jake'),(2010,'Taylor'),(2008,'Joe'))
(min_year, max_year, num_people) = get_data(tswift)
print("From", min_year, "to", max_year, \
      "Taylor Swift wrote songs about", num_people, 'people!')

# list
L = [2,1,3,6,3,7,0]
L.remove(2)
del(L[1])
L.extend([2,3])

s = "I<3 cs"
list(s)
s.split('<')
L = ['a','b','c']
''.join(L)
'_'.join(L)

L1 = [9,6,0,3]
L2 = sorted(L1)
L3 = L1.sort()
L4 = L3.reverse()

def remove_dups(L1, L2):
    for e in L1:
        if e in L2:
            L1.remove(e)
L1 = [1,2,3,4]
L2 = [1,2,5,6]
remove_dups(L1, L2)

def remove_dups(L1,L2):
    L1_copy = L1[:]
    for e in L1_copy:
        if e in L2:
            L1.remove(e)
L1 = [1,2,3,4]
L2 = [1,2,5,6]
remove_dups(L1,L2)