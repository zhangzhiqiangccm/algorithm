#!/usr/bin/env python
# -*- encoding: utf-8 -*- '''
# author zhangzhiqiang
# contact zhangzhiqiang@ccmu.edu.cn
# 题目描述：求两个数组的交集，顺序可以是任意的
class Solution:
    def intersect(self,nums1:list[int],nums2:list[int]) ->list[int]:
        from _collections import Counter
        nums1_dict = Counter(nums1)
        res = []
        for num in nums2:
            if nums1_dict[num] >0:
                res.append(num)
                nums1_dict[num] -=1
        return res