#Name: Neil Felix
#Date: 0ct - 11 - 17
#info: ask for input 

import matplotlib.pyplot as plt
import numpy as np

fl = input("Input name of png file: ")
nwfl = plt.imread(fl)
countSnow = 0
t = 0.75

for i in range(nwfl.shape[0]):
    for j in range(nwfl.shape[1]):
        if (nwfl[i,j,0] > t) and (nwfl[i,j,1] > t) and (nwfl[i,j,2] > t):
               countSnow = countSnow + 1

print("Snow count is" countSnow)
