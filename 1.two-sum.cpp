/*
 * @lc app=leetcode id=1 lang=cpp
 *
 * [1] Two Sum
 */

// @lc code=start
#include <unordered_map>
#include <vector>

class Solution {
public:
    std::vector<int> twoSum(std::vector<int>& nums, int target) {
        // note: b/c unordered vector we cannot use binary search

        // key = number, value = index
        std::unordered_map<int, int> seen;

        for (int i = 0; i < nums.size(); ++i) {
            int complement = target - nums[i];

            // <unordered_map>.find() returns 
            // an iterator pointing to the element if it exists 
            // an iterator <unordered_map>.end() if it does not exist
            auto it = seen.find(complement); 
            
            // if complement is found in the map
            if (it != seen.end()) {
                // when using an iterator
                // it->first = key (the number)
                // it->second = value (the index)
                return {it->second, i};
            }

            seen[nums[i]] = i;
        }

        return {};
    }
};
// @lc code=end

