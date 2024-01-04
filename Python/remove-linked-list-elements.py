# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def removeElements(self, head: Optional[ListNode], val: int) -> Optional[ListNode]:

        while (head!=None and head.val == val):
            #delete head
            head = head.next 

        if head == None:
            return head

        node = head
        tem = node

        while (node):

            #delete node
            if node.val == val:
                tem.next = node.next

            else:
                tem = node
                
            node = node.next

        return head

                
        
