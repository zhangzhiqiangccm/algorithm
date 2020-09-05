#!/usr/bin/env python3
#-*- coding:utf-8 -*-


from randomList import randomList
from quickSort import quickSort
import random

iList = quickSort(randomList(20))

def fibonacci(n):
    '''return the last element of the fibonacci sequence'''
    fList = [1, 1]
    while n > 1 :
        fList.append(fList[-1] + fList[-2])
        n -= 1
    return fList[-1]

def fibonacciSearch(iList, key):
    print("iList = %s" %str(iList))
    print("Find The number : %d" %key)
    iLen = len(iList)
    left = 0 
    right = iLen - 1
    indexSum = 0

    k = 1
    while fibonacci(k) -1 < iLen - 1: #fibonacci数列中的最后一个元素要比iList的长度稍微大一点
        k += 1

    while right - left > 1:
        mid = left + fibonacci(k - 1)
        if key < iList[mid] :
            right = mid - 1
            k -= 1
        elif key == iList[mid]:
            return mid
        else:
            left = mid + 1
            k -= 2
    if key == iList[left]:
        return left
    elif key == iList[right]:
        return right
    else:
        return -1

if __name__ == "__main__":
    keys = [random.choice(iList), random.randrange(min(iList), max(iList))]
    for key in keys:
        res = fibonacciSearch(iList, key)
        if res >= 0:
            print("%d is in the list, index is : %d\n" %(key, res))
        else:
            print("%d is not in the list\n" %key)
