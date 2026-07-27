class Solution {
public:
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if(head == NULL || left == right)
            return head;
        ListNode* dummy = new ListNode(0);
        dummy->next = head;
        ListNode* prevLeft = dummy;
        for(int i = 1; i < left; i++)
        {
            prevLeft = prevLeft->next;
        }
        ListNode* curr = prevLeft->next;
        ListNode* prev = NULL;
        int count = right - left + 1;
        while(count--)
        {
            ListNode* front = curr->next;
            curr->next = prev;
            prev = curr;
            curr = front;
        }
        prevLeft->next->next = curr;
        prevLeft->next = prev;
        return dummy->next;
    }
}; 
