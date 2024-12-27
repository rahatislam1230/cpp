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
