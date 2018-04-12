#Name: Neil Felix
#Date: 10/17
#info:

import matplotlib.pyplot as plt
import numpy as np

imgIn = input("Enter input image name: ")
imgOut = input("Enter cropped image name: ")
img1 = plt.imread(imgIn)
plt.imshow(img1)

tp = int(input("Enter top: "))
bt = int(input("Enter bottom: "))
lt = int(input("Enter left: "))
rt = int(input("Enter right: "))

img2 = img1[tp:bt, lt:rt]

plt.imshow(img2)
plt.imsave(imgOut, img2)
