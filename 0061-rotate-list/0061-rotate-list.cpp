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
    ListNode* rotateRight(ListNode* head, int k) {
        //checking edge cases
        if(head == nullptr || head->next == nullptr || k == 0){
            return head;
        }

        //finding length of the linked list
        ListNode* temp = head;
        int count = 1;
        while(temp->next != nullptr){
            count++;
            temp = temp->next;
        }

        // reduce k 
        k = k % count;
        int rotation = count - k;

        //making circular linked list adding last to head
        temp->next = head;

        ListNode* tail = head;
        // rotation steps
        for(int i = 1; i < rotation; i++){
            tail = tail -> next;
        }

        // breaking the circular ll
        ListNode* newHead = tail->next;
        tail->next = nullptr;

        return newHead;
    }
};