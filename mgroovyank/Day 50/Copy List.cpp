// https://www.interviewbit.com/problems/copy-list/


/**
 * Definition for singly-linked list.
 * struct RandomListNode {
 *     int label;
 *     RandomListNode *next, *random;
 *     RandomListNode(int x) : label(x), next(NULL), random(NULL) {}
 * };
 */
RandomListNode* Solution::copyRandomList(RandomListNode* A) {
    unordered_map<RandomListNode*, RandomListNode* > hash;
    RandomListNode *i = A;
    RandomListNode *newHead = NULL;
    RandomListNode *j = newHead;
    while(i != NULL){
        RandomListNode *temp = new RandomListNode(0);
        if(j == NULL){
            newHead = temp;
        }else{
            j->next = temp;
        }
        hash[i] = temp;
        j = temp;
        i = i->next;
    }
    i = A;
    j = newHead;
    while(i != NULL){
        j->label = i->label;
        j->random = hash[i->random];
        j = j->next;
        i = i->next;
    }
    return newHead;
}
