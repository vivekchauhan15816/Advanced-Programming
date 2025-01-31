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
        
        if(head == nullptr || head->next == nullptr) return head;
        ListNode *n1 = head;
        ListNode *n2 = n1->next;
        while( n1 != nullptr && n1->next != nullptr)
        {
            if(n1->val == n2->val)
            {
                n1 -> next = n2 -> next;
                n2 = n1->next;
            }
            else
            {
                n1 = n1->next;
            }
        }
        return head;
    }
};