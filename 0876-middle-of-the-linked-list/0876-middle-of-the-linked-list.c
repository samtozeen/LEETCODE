/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* middleNode(struct ListNode* head) {
    struct ListNode*current;
    int count=0;
    current=head;
    while(current!=NULL){
        count++;
        current=current->next;
    };
    count=count/2;
    struct ListNode*temp;
    temp=head;
    for(int i=0;i<count;i++){
        temp=temp->next;
    }
    return temp;  

    
}