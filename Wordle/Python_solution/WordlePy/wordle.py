#!/usr/bin/env python3
# NOTE: it is recommended to use this even if you don't understand the following code.


# input data
N = int(input().strip())
L = input().strip().split()


# insert your code here
csv=0
for i in L:
    if i=="_":
        csv=csv+1
#print(csv)
i=0
s=1
while i < csv:
    s=s*(26-(N-csv)-i)
    #print(s)
    i=i+1
print(s)

#Python code
#This code gives the number of solutions that exist for a certain "wordle"
#I just have to give the number of characters and the not completed word 
