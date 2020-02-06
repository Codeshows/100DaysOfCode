/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* head;
ListNode* reverseList1(ListNode* A) {
    if(A->next == NULL){
        head = A;
        return A;
    }
    ListNode* temp = reverseList1(A->next);
    temp->next = A;
    A->next = NULL;
    return A;
}
ListNode* Solution::reverseList(ListNode* A) {
    reverseList1(A);
    return head;
}
