# @file     Copy_List_with_Random_Pointer.c
# @author   Mostafa Asaad (https://github.com/M0stafa077)
# @brief    Problem number 138 on Leetcode. 
# @note     I used Python cause there's no hashMap in C, sadly '(

class Node:
    def __init__(self, x: int, next: 'Node' = None, random: 'Node' = None):
        self.val = int(x)
        self.next = next
        self.random = random

class Solution:
    def copyRandomList(self, head: 'Node') -> 'Node':
        hashMap = { None : None }

        iteratorNode = head
        while iteratorNode:
            # Create a new node
            copiedNode = Node(iteratorNode.val)
            # Add the new node to the hashMap
            hashMap[iteratorNode] = copiedNode
            # Move the iteratorNode forward
            iteratorNode = iteratorNode.next

        iteratorNode = head
        while iteratorNode:
            # get the copy of the current node
            copiedNode = hashMap[iteratorNode]
            # store the next pointer
            copiedNode.next = hashMap[iteratorNode.next]
            # store the random pointer
            copiedNode.random = hashMap[iteratorNode.random]
            # Move the iteratorNode forward
            iteratorNode = iteratorNode.next

        return hashMap[head]
        