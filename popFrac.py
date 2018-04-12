#Name: Neil Felix
#Date: 10/17
#info:
import matplotlib.pyplot as plt
import pandas as pd

#Open the CSV file and store in pop
pop = pd.read_csv('nycHistPop.csv',skiprows=5)

brName = input("Enter name of borough: ")
outName = input("Enter name of output file: ")

#Compute the fraction of the population of the give borough, and save as new column:
pop['Fraction'] = pop[brName]/pop['Total']

#Create a plot of year versus fraction of pop. in Bronx (with labels):
pop.plot(x = 'Year', y = 'Fraction')

#Save to the file:  outName
fig = plt.gcf()
fig.savefig(outName)
