/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *node) {
        map<ListNode*, int> mpp;
        ListNode* head = node;
        while(head != nullptr)
        {
            mpp[head]++;
            if(mpp[head] > 1) return true;

            head = head->next;
        }

        return false;
    }
};