#!/usr/bin/env python
# -*- encoding: utf-8 -*- '''
# author zhangzhiqiang
# contact zhangzhiqiang@ccmu.edu.cn
class solution(object):
    def maxsubarray(self,nums):
        n = len(nums)
        if n==1:
            return nums[0]
        left  = self.maxsubarray(nums[:len(nums)//2])
        right = self.maxsubarray(nums[len(nums)//2:])
        max_1 = nums[len(nums)//2-1]
        tmp = 0
        for i in range(len(nums)//2-1,-1,-1):   #从右往左遍历数组的元素
            tmp +=nums[i]
            max_1 = max(tmp,max_1)
        max_2 = nums[len(nums)//2]
        tmp = 0
        for i in range(len(nums)//2,len(nums)):
            tmp+=nums[i]
            max_2 = max(tmp,max_2)
        return max(left,right,max_2+max_1)