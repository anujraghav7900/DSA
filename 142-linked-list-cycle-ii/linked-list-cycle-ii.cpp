class Solution {
public:
    ListNode *detectCycle(ListNode *head) {

        if (head == NULL || head->next == NULL)
            return NULL;

        ListNode *slow = head;
        ListNode *fast = head;

        // Detect cycle
        while (fast != NULL && fast->next != NULL) {

            slow = slow->next;
            fast = fast->next->next;

            if (slow == fast) {

                ListNode *temp = head;

                while (temp != slow) {
                    temp = temp->next;
                    slow = slow->next;
                }

                return temp;
            }
        }

        return NULL;
    }
};