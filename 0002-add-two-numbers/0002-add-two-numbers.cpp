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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        //to pointer to move on the list  
        ListNode* head = nullptr;
        ListNode* tail = nullptr;
        int carry = 0 ;
        int sum = 0;
        while (l1 != nullptr || l2 != nullptr || carry != 0 ){
            //concept to solve the problem 
            int x = (l1!=nullptr) ? l1->val:0;
            int y = (l2!=nullptr) ? l2->val:0;
            sum = x + y + carry;
            carry = sum /10;
            int dig = sum % 10;
            ListNode* newnode = new ListNode(dig);
            // head -> the first new node in the list 
            if (head == nullptr){
                head = newnode;
                tail = newnode;
            }
            else {
                tail->next = newnode;
                tail =  newnode;
            }
            if(l1) l1 = l1->next;
            if(l2) l2 = l2->next;
            
        }
        //return a head bec it contain all element in list 
        return head;
    }
};