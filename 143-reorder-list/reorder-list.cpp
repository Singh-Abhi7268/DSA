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
    //beech se reverse krke alternate printing.
public:
 ListNode* reverseList(ListNode* head) {
    ListNode* prev=NULL;
        ListNode* curr=head;
        ListNode* Next=head;
      while(curr!=NULL){
        Next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=Next;
      } 
      return prev; 
        
    }
    void reorderList(ListNode* head) {
        ListNode* slow=head;
        ListNode* fast=head;
        while(fast->next!=NULL && fast->next->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
        }
        ListNode* b=reverseList(slow->next);
        ListNode * a=head;
        slow->next=NULL; //for breaking tthe list
        //merge these two altenatively
         ListNode *c=new ListNode(100);
          ListNode *temp=c;
           ListNode * tempc=c;
            ListNode * tempa=a;
             ListNode *tempb=b;
             while(tempa!=NULL && tempb!=NULL){
                tempc->next=tempa;
                tempa=tempa->next;
                 tempc=tempc->next;
             // alternate printing
             tempc->next=tempb;
                tempb=tempb->next;
                 tempc=tempc->next;

             }
             tempc->next=tempa;
             head=c->next;

    }
};