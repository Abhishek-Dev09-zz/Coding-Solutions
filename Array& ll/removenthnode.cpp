Problem url- https://leetcode.com/problems/remove-nth-node-from-end-of-list/

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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
      if(head==NULL) return NULL; 
      ListNode* main= head,*reference= head,*prev=NULL;
      for(int count=0;count<n;count++){
          if(reference->next==NULL){
              if(count==n-1)
                  head=head->next;
              return head;
              }
          reference= reference->next;
      }
      while(reference!=NULL){
          prev= main;
          main = main->next;
          reference= reference->next;
      }
          prev->next= main->next;
          delete(main);
        return head;
          
    }
};