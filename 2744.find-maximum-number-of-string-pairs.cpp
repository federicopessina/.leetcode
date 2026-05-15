/*
 * @lc app=leetcode id=2744 lang=cpp
 *
 * [2744] Find Maximum Number of String Pairs
 */

// @lc code=start
#include <algorithm>
#include <string>
#include <unordered_set>
#include <vector>

class Solution {
public:
    int maximumNumberOfStringPairs(std::vector<std::string>& words) {
        std::unordered_set<std::string> distinct_strings;
        std::unordered_set<std::string> seen;
        for (const auto &word : words) {
            std::string tmp_word = word;
            std::sort(tmp_word.begin(), tmp_word.end());

            // C++ 17: Use find() instead of count() for better performance
            // C++ 20: Use contains() for cleaner code
            if (seen.find(tmp_word) != seen.end()) 
            {
                distinct_strings.insert(tmp_word);
            }
            
            seen.insert(tmp_word);
            
        }

        return distinct_strings.size();
    }
};
// @lc code=end

