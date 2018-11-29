# -*- coding: utf-8 -*-
"""
Created on Sun Nov 18 17:43:18 2018

@author: JingQIN
"""

# MIT 6.0001 Problem_set_1 part C Finding a right amount to save away
# to do it efficiently, we use bisection search

portion_down_payment = 0.25
total_cost = 1000000
first_payment = portion_down_payment*total_cost
# bisection search
def getSalary():
    annual_salary = float(input("3Enter the starting annual salary: "))
    return annual_salary

def getSaving(portion,salary):
    semi_annual_rise = .07
    r = 0.04
    annual_salary = salary
    current_savings = 0
    for i in range(36):
        current_savings = current_savings*(1+r/12) + annual_salary*portion/120000
        if ((i+1)%6 == 0):
            annual_salary = annual_salary*(1+semi_annual_rise)
    return current_savings
            
lower = 0
higher = 10000
integer_saving = (lower + higher)/2
num_bisection = 1

salary = getSalary()
if getSaving(10000,salary) < first_payment :
    print("It is no possible to afford a house")
else:
    current_savings = getSaving(integer_saving, salary)
    while (current_savings > first_payment + 100 or current_savings < first_payment - 100):
        if (current_savings > first_payment + 100):
            higher = integer_saving
            integer_saving = (higher+lower)/2
            num_bisection += 1
            current_savings = getSaving(integer_saving, salary)
        elif (current_savings < first_payment - 100):
            lower = integer_saving
            integer_saving = (higher+lower)/2
            num_bisection += 1
            current_savings = getSaving(integer_saving, salary)
    print(integer_saving)
    print(num_bisection)
    
        