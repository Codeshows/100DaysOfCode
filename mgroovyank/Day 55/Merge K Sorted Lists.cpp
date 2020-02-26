// https://www.interviewbit.com/problems/merge-k-sorted-lists/


/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::mergeKLists(vector<ListNode*> &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details

    priority_queue<pair<int, ListNode*> > pq;
    int n = A.size();
    for(int i=0;i<n;i++){
        ListNode* ptr = A[i];
        while(ptr!=NULL){
            pq.push(make_pair(-ptr->val, ptr));
            ptr = ptr->next;
        }
    }
    ListNode* ans = new ListNode(0);
    ListNode* head = NULL;
    while(!pq.empty()){
        if(head == NULL){
            head = pq.top().second;
            head->val = -1 * pq.top().first;
            ans = head;
            pq.pop();
            continue;
        }
        head->next = pq.top().second;
        head = head->next;
        head->val = -1 * pq.top().first;
        pq.pop();
    }
    return ans;
}
