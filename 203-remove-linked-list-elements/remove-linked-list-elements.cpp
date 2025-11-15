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
    ListNode* removeElements(ListNode* head, int val) 
    {
        while(head && head->val == val) head = head->next;

        ListNode* node = head;
        ListNode* prev = nullptr;
        
        while(node)
        {
            if(node -> val == val){
                if(prev) prev->next = node->next;
            }
            else
            {
                prev = node;
            }

            node = node->next;
        }

        return head;
    }
};