# -*- coding: utf-8 -*-
"""
Created on Sun Nov 18 17:18:09 2018

@author: JingQIN
"""

# MIT 6.0001 Problem_set_1 part B Saving, with a raise
annual_salary = float(input("2Enter the starting annual salary: "))
portion_saved = float(input("Enter the portion of salary to be saved: "))
total_cost = int(input("Enter the cost of your dream home: "))
semi_annual_raise = float(input("Enter the semi-annual raise, as a decimal: "))
current_savings = 0
r = 0.04
portion_down_payment = 0.25
current_savings = current_savings*(1+r/12) + annual_salary/12*portion_saved
num = 1
while (current_savings < portion_down_payment*total_cost):
    num += 1
    current_savings = current_savings*(1+r/12) + annual_salary/12*portion_saved
    if (num%6 == 0):
        annual_salary = annual_salary*(1+semi_annual_raise)
print ("Number of months: " + str(num))