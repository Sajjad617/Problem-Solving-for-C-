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
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        if(head->next == NULL) return head;
        ListNode *temp = head;
        while(temp->next != NULL){
            int gcd = __gcd(temp->val, temp->next->val);
            ListNode *nNode = new ListNode(gcd);
            nNode->next = temp->next;
            temp->next = nNode;
            temp = temp->next->next;
        }
        return head;
        
    }
};