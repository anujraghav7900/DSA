class Solution {
public:
    ListNode* middleNode(ListNode* head) {

        int count = 0;
        ListNode* temp = head;

        // Count nodes
        while (temp != NULL) {
            count++;
            temp = temp->next;
        }

        // Move to middle
        temp = head;
        for (int i = 0; i < count / 2; i++) {
            temp = temp->next;
        }

        return temp;
    }
};