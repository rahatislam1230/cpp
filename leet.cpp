class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> numMap; // To store numbers and their indices
        for (int i = 0; i < nums.size(); ++i) {
            int complement = target - nums[i];
            if (numMap.find(complement) != numMap.end()) {
                return {numMap[complement], i}; // Return the indices of the two numbers
            }
            numMap[nums[i]] = i;
        }
        return {}; // Return an empty vector if no solution exists
    }
};
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* dummy = new ListNode(0); // Dummy node to simplify the result list construction
        ListNode* current = dummy;         // Pointer to the current node in the result list
        int carry = 0;                     // Carry to handle sums greater than 9
        
        // Traverse both lists
        while (l1 != nullptr || l2 != nullptr || carry != 0) {
            int x = (l1 != nullptr) ? l1->val : 0;  // Get the current value from l1
            int y = (l2 != nullptr) ? l2->val : 0;  // Get the current value from l2
            
            int sum = x + y + carry;                // Add the digits along with the carry
            carry = sum / 10;                       // Calculate new carry for the next iteration
            current->next = new ListNode(sum % 10); // Create a new node for the current digit
            current = current->next;                // Move the current pointer
            
            // Move to the next nodes in l1 and l2 if available
            if (l1 != nullptr) l1 = l1->next;
            if (l2 != nullptr) l2 = l2->next;
        }
        
        return dummy->next; // Return the result starting from the node after the dummy node
    }
};
