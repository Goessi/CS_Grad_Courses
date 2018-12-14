# -*- coding: utf-8 -*-
"""
Created on Fri Dec  7 10:10:45 2018
MIT 6-0001 lecture 10/11/12
@author: JingQIN
"""

import time
def c_to_f(c):
    return c*9/5 + 32

t0 = time.clock()
c_to_f(100000)
t1 = time.clock() - t0
print("t =", t0, ":", t1, "s,")

def fact_iter(n):
    '''assumes n an int >= 0'''
    answer = 1
    while n > 1:
        answer *= n
        n -= 1
    return answer

# aim: O(2*n) -> O(n*2) -> O(nlogn) -> O(n) -> O(logn) -> O(1)

# O(n)
def fact_iter(n):
    prod = 1
    for i in range(l, n+l):
        prod *= i
    return prod

# O(len(L1)*len(L2))
def inter(L1, L2):
    tmp = []
    for e1 in L1:
        for e2 in L2:
            if e1 == e2:
                tmp.append(e1)
    res = []
    for e in tmp:
        if not(e in res):
            res.append(e)
    return res

# binary search O(logn) n = Len(L)
    
def bisect_search1(L, e):
    if L == []:
        return False
    elif len(L) == l:
        return L[0] == e
    else:
        half = len(L)//2
        if L[half] > e:
            return bisect_search1(L[:half], e)
        else:
            return bisect_search1(L[half:], e)
        
def bisect_search2(L, e):
    def bisect_search_helper(L, e, low, high):
        if high == low:
            return L[low] == e
        mid = (low + high)//2
        if L[mid] == e:
            return True
        elif L[mid] > e:
            if low == mid:
                return False
            else:
                return bisect_search_helper(L, e, low, mid - 1)
        else:
            return bisect_search_helper(L, e, mid + 1, high)
    if len(L) == 0:
        return False
    else:
        return bisect_search_helper(L, e, 0, len(L) - 1)
    
def intToStr(i):
    digits = '0123456789'
    if i == 0:
        return '0'
    res = ''
    while i > 0:
        res = digits[i%10] + res
        i = i//10
    return result # O(logn)

# O(n)
def fact_iter(n):
    prod = 1
    for i in range(1, n+1):
        prod *= i
    return prod

def fact_recur(n):
    '''assume n >= 0'''
    if n <= 1:
        return 1
    else:
        return n*fact_recur(n-1)
    
# log-linear
# merge sort

# exponential complexity
def genSubsets(L):
    if len(L) == 0:
        return [[]]
    smaller = genSubsets(L[:-1])
    
    extra = L[-1:]
    new = []
    for small in smaller:
        new.append(small+extra)
    return smaller+new

def bubble_sort(L):
    swap = False
    while not swap:
        swap = True
        for j in range(1, len(L)):
            if L[j-1] > L[j]:
                swap = False
                temp = L[j]
                L[j] = L[j-1]
                L[j-1] = temp

def selection_sort(L):
    suffixSt = 0
    while suffixSt != len(L):
        for i in range(suffixSt, len(L)):
            if L[i] < L[suffixSt]:
                L[suffixSt], L[i] = L[i], L[suffixSt]
        suffixSt += 1
        
def merge(left, right):
    result = []
    i, j = 0, 0
    while i < len(left) and j < len(right):
        if left[i] < right[j]:
            result.append(left[i])
            i += 1
        else:
            result.append(right[j])
            j += 1
    while (i < len(left)):
        result.append(left[i])
        i += 1
    while (j < len(right)):
        result.append(right[j])
        j += 1
    return result

def merge_sort(L):
    if len(L) < 2:
        return L[:]
    else:
        middle = len(L)//2
        left = merge_sort(L[:middle])
        right = merge_sort(L[middle:])
        return merge(left, right)