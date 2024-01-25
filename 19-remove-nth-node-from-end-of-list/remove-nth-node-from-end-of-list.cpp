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
    int countNodes(ListNode* head)
    {
        if(head == nullptr) return 0;
        return 1 + countNodes(head->next);
    }

    ListNode* removeNthFromEnd(ListNode* head, int n) 
    {
        int nodeLen = countNodes(head);
        
        if(nodeLen == 1) return nullptr; //only one node in the linkedlist

        if(nodeLen == n){
            return head->next;
        } //this means whenever we are trying to remove the last node from the end
          //we are actually removing the first node of the linkedlist, so just return "head->next"

        nodeLen = nodeLen - n - 1; // 5 - 2 - 1 = 2
        // 2 - 1 - 1 = 0
        // 2 - 2 - 1 = -1

        ListNode* node = head;
        while(nodeLen > 0)
        {
            node = node->next;
            nodeLen--;
        }
        //after the while loop ends, we have reached the node which is behind the node to be removed

        node->next = node->next->next;

        return head;
    }
};

// 1 2 3 4 5
// 