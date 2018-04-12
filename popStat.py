#Name: Neil Felix
#Date: 10/17
#info:
import matplotlib.pyplot as plt
import pandas as pd

#Open the CSV file and store in pop
pop = pd.read_csv('nycHistPop.csv',skiprows=5)

brName = input("Enter name of borough: ")
#outName = input("Enter name of output file: ")

print("Minimum population: ", pop[brName].min())
print("Average population: ", pop[brName].mean())
print("Maximum population: ", pop[brName].max())
