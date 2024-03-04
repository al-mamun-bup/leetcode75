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
    ListNode* oddEvenList(ListNode* head) {
        if(head==NULL or head->next==NULL){
            return head;
        }
        ListNode* temp = head;
        vector<int>v;
        while(temp != NULL and temp->next != NULL){
            v.push_back(temp->val);
            temp = temp->next->next;
        }
        if(temp != NULL){
            v.push_back(temp->val);
        }
        temp = head->next;
        while(temp != NULL and temp->next != NULL){
            v.push_back(temp->val);
            temp = temp->next->next;
        }
        if(temp != NULL){
            v.push_back(temp->val);
        }
        int i = 0;
        temp = head;
        while(i < v.size()){
            temp->val = v[i];
            temp = temp->next;
            i++;
        }
        v.clear();
        return head;
    }
};
