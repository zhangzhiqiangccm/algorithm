#!/usr/bin/env python
# -*- encoding: utf-8 -*- '''
# author zhangzhiqiang
# contact zhangzhiqiang@ccmu.edu.cn
# 题目描述：给两个字符串s和t，判断t是否是s的字母异位词（变换位置后一样，要求含字母个数一样）
# python实现有点香
class Solution:
    def isAnagram(self,s:str,t:str) ->bool:
        from _collections import Counter
        s = Counter(s)
        t = Counter(t)
        if s == t:
            return True
        else:
            return False