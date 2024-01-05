/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {

        int value = 0;
        ListNode* node = head;

        while (node && node->next){

            if (node->val == node->next->val){
                ListNode* tem = node->next;
                node -> next = node-> next ->next;
                delete tem;
                tem = nullptr;
            }   

            else{
                node = node ->next;
            }
        }
        return head;
        
    }
};
