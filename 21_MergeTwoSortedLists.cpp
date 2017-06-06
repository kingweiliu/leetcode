/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
  struct ListNode {
      int val;
      ListNode *next;
      ListNode(int x) : val(x), next(0) {}
  };

class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {    	
    	ListNode result(0);
    	ListNode* pret = &result;    	    	
    	while (l1 && l2) {    		
    		if (l1->val < l2->val) {
    			pret->next = l1;
    			l1 = l1->next;
    		} else {
    			pret->next = l2;
    			l2 = l2->next;
    		}
    		pret = pret->next;
    	}
    	if (!l1) {
    		pret->next = l2;    		
    	} else if (!l2) {
    		pret->next = l1;
    	}
    	return result.next;
    }
};

int main() {
	ListNode l1(1), l2(2);


}

