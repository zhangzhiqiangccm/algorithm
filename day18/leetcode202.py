#!/usr/bin/env python
# -*- encoding: utf-8 -*- '''
# author zhangzhiqiang
# contact zhangzhiqiang@ccmu.edu.cn
# 题目描述：判断一个数是否为快乐数。快乐数是对于一个正整数，每一次将该数替换为它每个位置上的数
#          字的平方和，然后重复这个过程指导这个数变成1，即可以成为快乐数。有可能无限循环也不能变成1
class Solution:
    def isHappy(self,n:int) -> bool:
        already = set()
        while n !=1:
            sum = 0
            while n>0:
                tmp = n%10
                sum = sum + tmp**2
                n = n//10
            if sum in already:
                return False
            else:
                already.add(sum)
            n = sum
        return True