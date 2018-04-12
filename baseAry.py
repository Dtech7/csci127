#Name: Neil Felix
#Date: 10/14/17
#info: ask user to input a base; program then creates an array that shows all numbers


base = int(input("Enter a base number: "))
digits = "0123456789ABCDEF"

for i in digits[:base]:
    for j in digits[:base]:
        x = str(i) + str(j)
        print(x, end=" ")
    print()
