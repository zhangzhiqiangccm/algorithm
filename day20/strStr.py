#!/usr/bin/env python3
#-*- coding:utf-8 -*-
def strStr(haystack, needle):
    if len(needle) > len(haystack):
        return -1
    if needle == haystack:
        return 0
    length = len(needle)
    pointer = 0
    lenght = len(needle)
    while pointer <= (len(haystack) - len(needle)):
        if haystack[pointer: pointer + length] == needle: # subStr = hystack[pointer: pointer + length]
            return pointer
        else:
            pointer += 1
    return -1
                
        

if __name__ == "__main__":
    # haystack = "hello"
    # needle = "ll"
    haystack = "mississippi"
    needle = "pi"
    print(strStr(haystack, needle))