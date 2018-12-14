# -*- coding: utf-8 -*-
"""
Created on Sun Nov 18 11:58:20 2018

@author: JingQIN
"""
import random
# MIT 6.0001 Problem_set_1 part A House Hunting

# example
for i in range(500):
    print("haha")

my_list = [5,2,7,-4,0]
for i in range(len(my_list)):
    my_list[i] += 1
    
num = float(input("Enter a positive number: "))
while num <= 0.0:
    num = float(input("Enter a POSITIVE number: "))

num = random.random()
while num <= 0.5:
    num = random.random()
    
my_list = [1,2,3,4,5,6,7,8]
greater_than_five = False
for elem in my_list:
    if elem > 5:
        greater_than_five = True
        break
    
# house hunting
annual_salary = float(input("Enter the starting annual salary: "))
portion_saved = float(input("Enter the portion of salary to be saved: "))
total_cost = int(input("Enter the cost of your dream home: "))
current_savings = 0
r = 0.04
portion_down_payment = 0.25
current_savings = current_savings*(1+r/12) + annual_salary/12*portion_saved
num = 1
while (current_savings < portion_down_payment*total_cost):
    num += 1
    current_savings = current_savings*(1+r/12) + annual_salary/12*portion_saved
print ("Number of months: " + str(num))

