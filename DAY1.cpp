//two sum_______________________________

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        for(int i = 0; i < nums.size(); i++) {
            
            for(int j = i + 1; j < nums.size(); j++) {
                
                if(nums[i] + nums[j] == target) {
                    return {i, j};
                }
                
            }
        }
        
        return {};
    }
};

//add two number 
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {

        ListNode* head = new ListNode(0);
        ListNode* curr = head;
        int carry = 0;

        while (l1 != NULL || l2 != NULL || carry) {

            int sum = carry;

            if (l1) {
                sum += l1->val;
                l1 = l1->next;
            }

            if (l2) {
                sum += l2->val;
                l2 = l2->next;
            }

            carry = sum / 10;
            curr->next = new ListNode(sum % 10);
            curr = curr->next;
        }

        return head->next;
    }
};
