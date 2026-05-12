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
    ListNode* reverseList(ListNode* head) {
                if(head  == nullptr)
            return head;
        else if (head->next == nullptr)
            return head;
        ListNode* st = head;
        ListNode* cur = head->next;
        ListNode* nex = cur -> next;
        while(cur != nullptr)
        {
            ListNode* copy = head;
            st -> next = nex;
            cur -> next = head;
            head = cur;
            cur = nex;
            if(cur != nullptr)
                nex = cur -> next;
        } 
        return head;
    }
};
