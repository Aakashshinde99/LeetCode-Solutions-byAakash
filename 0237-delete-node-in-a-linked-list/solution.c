/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
void deleteNode(struct ListNode* node) {
    if(node == NULL){
        return;
    }
    struct ListNode *temp = node;
    struct ListNode *last = node;

    while(temp->val == node->val){
        last = temp;
        temp = temp->next;
        
    }

    while(temp->next != NULL){
        last->next = temp;
        last->val = temp->val;
        last = temp;
        temp = temp->next;
    }
    
    last->val = temp->val;
    last->next = NULL;
    
    
}






















