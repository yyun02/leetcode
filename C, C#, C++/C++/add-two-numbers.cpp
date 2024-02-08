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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* res = new ListNode();
        ListNode* tem = res;
        int sum = 0, roundup = 0;;

        while (l1 != NULL || l2 != NULL){
            sum = 0;
            if (l1 != NULL){
                sum = l1->val;
                //cout << " l1 : " << l1->val;
                l1 = l1->next;
            }
            if (l2 != NULL){
                sum += l2->val;
                //cout << " l2 : " << l2->val;
                l2 = l2->next;
            }
            //cout << endl;
            sum += roundup;
            roundup = sum/10;
            //cout << "  sum : "<< sum << "  roundup : " <<  roundup<< endl;
            tem -> next = new ListNode(sum%10);
            tem = tem -> next;
        }
        if (roundup > 0){
            tem -> next = new ListNode(roundup);
        }
        return res -> next;
    }
};
