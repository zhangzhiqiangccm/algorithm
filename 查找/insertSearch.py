#!/usr/bin/env python3
#-*- coding:utf-8 -*-


from randomList import randomList
from quickSort import quickSort
import random

iList = quickSort(randomList(20))

def insertSearch(iList, key):
    print("iList = %s" %str(iList))
    print("Find The number : %d" %key)
    iLen = len(iList)
    left = 0 
    right = iLen -1

    while right - left > 1:
        mid = left + (key - iList[left]) * (right - left) // (iList[right] - iList[left])
        if mid == left:
            mid += 1 #当iList[right]和iList[left]相差太大时，有可能导致mid一直都等于left，从而陷入死循环
        if key < iList[mid]:
            right = mid
        elif key > iList[mid]:
            left = mid
        else:
            return mid
    if key == iList[left]:
        return left
    elif key == iList[right]:
        return right
    else:
        return -1


if __name__ == "__main__":
    keys = [random.choice(iList), random.randrange(min(iList), max(iList))]
    for key in keys:
        res = insertSearch(iList, key)
        if res >= 0:
            print("%d is in the list, index is : %d\n" %(key, res))
        else:
            print("%d is not in the list\n" %key)