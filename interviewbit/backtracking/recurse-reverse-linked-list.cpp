ListNode* head; 

ListNode* Solution::reverseList(ListNode* A) {
    if(A->next == NULL){
        head = A;
        return head;
    }
    reverseList(A->next);
    ListNode* q = A->next;
    q->next = A;
    A->next = NULL;

    return head;
}

