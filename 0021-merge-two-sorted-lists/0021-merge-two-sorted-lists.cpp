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
 #include <set>
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        //solution 1 o(n+m)log(n+m)
        //use multiset bec it is sorted and duplicate available
        // multiset<int> myset;
        // while (list1) {
        //     myset.insert(list1->val);
        //     list1 = list1->next;
        // }
        // while (list2) {
        //     myset.insert(list2->val);
        //     list2 = list2->next;
        // }
        // ListNode dummy;
        // ListNode* tail = &dummy;
        // for (int val : myset) {
        //     tail->next = new ListNode(val);
        //     tail = tail->next;
        // }
        // return dummy.next;

        //solution2 o(n+m)// shaor b el tail ala a2l mkan fe 2 list  
        ListNode ayheta ;
        ListNode* tail = & ayheta;
        while(list1 && list2){
            if(list1->val<=list2->val){
                tail->next = list1;
                list1 = list1->next;
            }
            else{
                tail->next = list2;
                list2 = list2->next;
            }
            tail = tail-> next;
    
        }
        if(list1) tail->next = list1;
        else if(list2) tail->next = list2;
        return ayheta.next;


    }

};