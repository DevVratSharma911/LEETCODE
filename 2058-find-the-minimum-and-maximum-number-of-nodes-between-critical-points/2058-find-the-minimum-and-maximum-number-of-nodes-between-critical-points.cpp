class Solution {
public:
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        ListNode* prev = head;
        ListNode* temp = head->next;

        int count = 1;

        int first = -1;
        int last = -1;
        int minDis = INT_MAX;

        while (temp->next != NULL) {

            if ((temp->val > prev->val && temp->val > temp->next->val) ||
                (temp->val < prev->val && temp->val < temp->next->val)) {

                if (first == -1) {
                    first = count;
                    last = count;
                }
                else {
                    minDis = min(minDis, count - last);
                    last = count;
                }
            }

            temp = temp->next;
            prev = prev->next;
            count++;
        }

        if (first == -1 || first == last)
            return {-1, -1};

        return {minDis, last - first};
    }
};