#!/usr/bin/env python
# -*- encoding: utf-8 -*- '''
# author zhangzhiqiang
# contact zhangzhiqiang@ccmu.edu.cn
# 题目描述：给定一个无序数组，找出最长连续递增子序列
def findlengthoflcis(self, nums:List[int]) ->int:
    if not nums:return 0
    dp = [1]*len(nums)
    for i in range(1,len(nums)):
        if nums[i] > nums[i-1]:
            dp[i] = dp[i-1] +1
        else:
            dp[i] = 1
    return max(dp)
