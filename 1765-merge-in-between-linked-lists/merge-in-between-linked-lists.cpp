class Solution {
public:
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) 
    {
        ListNode* first = list1;
        ListNode* last = list1;

        for(int i = 0; i<a-1; i++) first = first->next;

        for(int i = 0; i<b; i++) last = last->next;

        first->next = list2;
        while(list2->next) list2 = list2->next;

        list2->next = last->next;

        return list1;
    }
};