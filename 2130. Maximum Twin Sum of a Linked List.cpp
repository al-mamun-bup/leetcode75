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
    int pairSum(ListNode* head) {
        ListNode* slow,*fast,*prev,*nextNode;
        int ans = 0;
        slow = head;
        fast = head;
        while(fast and fast->next){
            slow = slow->next;
            fast = fast->next->next;
        }
        prev = NULL;
        while(slow){
            nextNode = slow->next;
            slow->next = prev;
            prev = slow;
            slow = nextNode;
        }
        while(prev){
            ans = max(ans,head->val + prev->val);
            head = head->next;
            prev = prev->next;
        }
        return ans;
    }
};
