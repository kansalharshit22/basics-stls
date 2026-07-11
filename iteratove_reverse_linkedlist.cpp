//lc 234 palindromic ll 
// slow fast pointer + revrse after midlle element

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
class Solution {// 1 2  2 1 
public:
    ListNode* reverse(ListNode* start){
        ListNode* prev=NULL;
        ListNode* temp;
        while(start!=NULL){
            temp=start->next;
            start->next=prev;
            prev=start;
            start=temp;
        }
        return prev;
    }
    bool isPalindrome(ListNode* head) {
        //using middle and reversing the list after midlle leme
        ListNode* slow=head;
        ListNode* fast=head;
        while(fast->next&&fast->next->next){
            slow=slow->next;
            fast=fast->next->next;
        }
        //slow will poitn to the mid elem
        slow->next=reverse(slow->next);

        slow=slow->next;
        while(slow){
            if(head->val!=slow->val)return false;

            slow=slow->next;
            head=head->next;
        }    
        return true;

    }
};
