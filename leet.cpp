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
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> seen;  // To track characters in the current window
        int maxLength = 0;          // Variable to store the maximum length
        int start = 0;              // Start pointer for the sliding window

        for (int end = 0; end < s.length(); ++end) {
            // If the character at 'end' is in the set, shrink the window from the start
            while (seen.count(s[end]) > 0) {
                seen.erase(s[start]);
                start++;  // Move the start pointer to the right
            }
            
            seen.insert(s[end]);  // Add the current character to the set
            maxLength = max(maxLength, end - start + 1);  // Update the maximum length
        }

        return maxLength;  // Return the maximum length of the substring without repeating characters
    }
};
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> seen;  // To track characters in the current window
        int maxLength = 0;          // Variable to store the maximum length
        int start = 0;              // Start pointer for the sliding window

        for (int end = 0; end < s.length(); ++end) {
            // If the character at 'end' is in the set, shrink the window from the start
            while (seen.count(s[end]) > 0) {
                seen.erase(s[start]);
                start++;  // Move the start pointer to the right
            }
            
            seen.insert(s[end]);  // Add the current character to the set
            maxLength = max(maxLength, end - start + 1);  // Update the maximum length
        }

        return maxLength;  // Return the maximum length of the substring without repeating characters
    }
};
class Solution {
public:
    int reverse(int x) {
        int reversed = 0;
        
        // Edge case for INT_MIN (-2147483648) where the negation would overflow
        if (x == INT_MIN) {
            return 0;
        }
        
        int sign = (x < 0) ? -1 : 1;  // Store the sign of x
        x = abs(x);  // Work with the absolute value of x
        
        while (x > 0) {
            int digit = x % 10;  // Get the last digit
            x /= 10;  // Remove the last digit from x
            
            // Check for overflow before updating the reversed number
            if (reversed > INT_MAX / 10 || (reversed == INT_MAX / 10 && digit > 7)) {
                return 0;  // Return 0 if reversing would overflow
            }
            
            reversed = reversed * 10 + digit;  // Append the digit to the reversed number
        }
        
        return reversed * sign;  // Restore the sign and return the result
    }
};
class Solution {
public:
    bool isPalindrome(int x) {
        // If the number is negative or ends with a 0 (except for 0 itself), it's not a palindrome
        if (x < 0 || (x % 10 == 0 && x != 0)) {
            return false;
        }
        
        int reversedHalf = 0;
        // Reverse the second half of the number
        while (x > reversedHalf) {
            reversedHalf = reversedHalf * 10 + x % 10; // Extract last digit and build reversed number
            x /= 10; // Remove last digit from the original number
        }
        
        // Check if the first half equals the second half (reversed), or if the number has odd digits, check the middle digit
        return x == reversedHalf || x == reversedHalf / 10;
    }
};
