

from createNode import *

def removeNthFromEnd(head: ListNode, n: int) -> ListNode:
    # 常规算法
    # pointer = head
    # length = 0
    # while pointer:
    #     pointer = pointer.next
    #     length += 1
    # if length == 1:
    #     return None
    # pointer = head
    # if n >= length:
    #     head.val = head.next.val
    #     head.next = head.next.next
    # else:
    #     if n == 1:
    #         for i in range(length - 2):
    #             pointer = pointer.next
    #         pointer.next = None
    #     else:
    #         for i in range(length - n - 1):
    #             pointer = pointer.next
    #         pointer.next  = pointer.next.next
    # return head

    # 进阶算法
    if head.next == None:
        return None
    left = right = head
    si = 0 
    while si < n:
        si += 1
        right = right.next
    if right == None:
        head = head.next #删除第一个节点
        return head
    while right.next != None:
        left = left.next
        right = right.next
    if n == 1: #删除最后一个节点
        left.next = None
    else: #删除中间的节点
        left.next = left.next.next
    return head
    




if __name__ == "__main__":
    # head = createChain(6)
    head = createChainFromList([2, 1])
    showChain(head)
    rHead = removeNthFromEnd(head, 2)
    showChain(rHead)