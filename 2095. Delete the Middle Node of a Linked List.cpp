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
    ListNode* deleteMiddle(ListNode* head) {
        int cnt = 0;
        ListNode* temp = head;
        if(head->next==NULL){
            return NULL;
        }
        while(temp != NULL){
            cnt++;
            temp = temp->next;
        }

        if(cnt==2){
            head->next = NULL;
            return head;
        }
        int mid = (cnt) / 2;
        cnt = 0;
        temp = head;
        mid--;
        while(mid--){
            temp = temp->next;
        }
        temp->next = temp->next->next;
        return head;
    }
};
