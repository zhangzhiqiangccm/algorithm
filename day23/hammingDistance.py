#!/usr/bin/env python3
#-*- coding:utf-8 -*-

def hammingDistance(x, y):
    xList = list(bin(x))[2::]
    yList = list(bin(y))[2::]
    if len(xList) < 31:
        xList = ['0'] * (31 - len(xList)) + xList
    if len(yList) < 31:
        yList = ['0'] * (31 - len(yList)) + yList
    n = 0
    for i in range(31):
        if xList[i] != yList[i]:
            n += 1
    return n

if __name__ == "__main__":
    x = 2
    y = 4
    print("The hamming Distance is : %d" %(hammingDistance(x, y)))