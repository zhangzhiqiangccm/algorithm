#!/usr/bin/env python
# -*- encoding: utf-8 -*- '''
# author zhangzhiqiang
# contact zhangzhiqiang@ccmu.edu.cn
# 题目描述：一个数组nums，返回索引i和j使得nums[i]+nums[j]等于给定值
# 思路：数组是否有序？解是否存在或者为多解？
# 暴力法
class Solution:
    def twosum(self,nums:list[int],target:int) ->list[int]:
        len_nums = len(nums)
        for i in range(len_nums):
            for j in range(i+1,len_nums):
                if nums[i] +nums[j] == target:
                    return [i,j]

# 加上排序
class Solution:
    def twosum(self,nums:list[int],target:int) ->list[int]:
        record = dict()
        nums_copy = nums.copy()
        sameflag = True
        nums.sort()
        l,r = 0,len(nums) -1
        while l<r:
            if nums[l] + nums[r] ==target:
                break
            elif nums[l] +nums[r] < target:
                l+=1
            else:
                r -=1
        res = []
        for i in range(len(nums)):
            if nums_copy[i] == nums[l] and sameflag:
                res.append(i)
                sameflag = False
            elif nums_copy[i] == nums[r]:
                res.append(i)
        return res