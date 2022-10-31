
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
    ListNode* deleteDuplicates(ListNode* head) {
     ListNode* first = head;
     ListNode* sec = head;
     ListNode* root=nullptr;
     ListNode* tmp=nullptr;
     //find root
     while(sec->next != nullptr)
     {
     	bool flag = false;
     	while(first->val == sec->val)
     	{
     		sec = sec->next;
     		flag = true;
     	}
     	if (flag) 
     	{
     		first = sec;
     		}
     	else if(root == nullptr){root = first; tmp=root; first = sec;}
     	else {tmp->next = first; first=sec;}    	
     	}   
    }
    return root;
};

int main(int argc, char *argv[])
{
	
}