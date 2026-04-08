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
public:
    bool hasCycle(ListNode* head) {
        if(!head || !head -> next) {
            return false;
        }
        ListNode* slowHead = head;
        ListNode* fastHead = head;
        while((slowHead -> next)) {
            if(slowHead -> next) 
                slowHead = slowHead -> next;
            else
                return false;
            if(!fastHead -> next || !fastHead -> next -> next)
                return false;
            else
                fastHead = fastHead -> next -> next;
            if(slowHead == fastHead) {
                return true;
            }
        }
        return false;
    }
};
