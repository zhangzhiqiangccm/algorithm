#!/usr/bin/env python
# -*- encoding: utf-8 -*- '''
# author zhangzhiqiang
# contact zhangzhiqiang@ccmu.edu.cn
class Solution(object):
    def majorityElement(self,nums):
        if not nums:
            return None
        if len(nums) == 1:
            return nums[0]
        left = self.majorityElement(nums[:len(nums)//2])
        right = self.majorityElement(nums[len(nums)//2:])
        if left == right:
            return left
        if nums.count(left) > nums.count(right):
            return left
        else:
            return right


