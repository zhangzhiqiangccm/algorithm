#!/usr/bin/env python
# -*- encoding: utf-8 -*- '''
# author zhangzhiqiang
# contact zhangzhiqiang@ccmu.edu.cn
# 题目描述：给定两个数组nums，求两个数组的公共元素
# 如：nums1 = [1,2,2,1], nums2 = [2,2]      结果[2]，结果中每个元素只能出现一次，出现的顺序无所谓
class Sulotion:
    def intersection(self,nums1:list[int],nums2:list[int]) ->list[int]:
        nums1 = set(nums1)
        nums3 = []
        for i in nums2:
            if i in nums1:
                nums3.append(i)
            else:
                pass
        return set(nums3)
