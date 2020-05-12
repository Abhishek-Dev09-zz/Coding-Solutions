Problem url -https://leetcode.com/problems/add-two-numbers/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
      ListNode* head = NULL; ListNode* prev = NULL;
        int sum = 0, carry = 0;
        while(l1 || l2){
            int v1= l1?l1->val:0;
            int v2= l2?l2->val:0;
            sum = v1+v2+carry;
            int temp = sum%10;
            carry= sum/10;
            ListNode* curr = new ListNode(temp);
            if(!head) {head = curr;}
            if(prev) prev->next = curr;
            prev = curr;
            l1 = l1?l1->next:NULL;
            l2 = l2?l2->next:NULL;
        }
     if(carry) { ListNode* curr = new ListNode(carry);
               prev->next=curr;}    
     return head;
    }
};