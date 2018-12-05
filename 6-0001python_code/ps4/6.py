# -*- coding: utf-8 -*-
"""
Created on Tue Dec  4 08:18:03 2018
MIT 6-0001 lecture 7
@author: JingQIN
"""

#try:
#    a = int(input("Tell me one number:"))
#    b = int(input("Tell me another number:"))
#except:
#    print("Bug in user input.")
#
#try:
#    a = int(input("Tell me one number: "))
#    b = int(input("Tell me another number: "))
#    print("a/b = ", a/b)
#    print("a+b = ", a+b)
#except ValueError:
#    print("Could not convert to a number.")
#except ZeroDivisionError:
#    print("Can't divide by zero.")
#except:
#    print("Something went very wrong.")
#    
#def get_ratios(L1, L2):
#    ''' Assumes: L1 and L2 are lists of equal length of numbers
#        Returns: a list containing L1[i]/L2[i] '''
#    ratios = []
#    for inde in range(len(L1)):
#        try:
#            ratios.append(L1[index]/L2[index])
#        except ZeroDivisionError:
#            ratios.append(float('nan'))
#        except:
#            raise ValueError('get_ratios called with bad arg')
#    return ratios

def get_stats(class_list):
    new_stats = []
    for elt in class_list:
        new_stats.append([elt[0], elt[1], avg(elt[1])])
    return new_stats

def avg(grades):
    try:
        return sum(grades)/len(grades)
    except ZeroDivisionError:
        print('warning: no grades data')