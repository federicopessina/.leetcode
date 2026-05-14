/*
 * @lc app=leetcode id=14 lang=cpp
 *
 * [14] Longest Common Prefix
 */

// @lc code=start
#include <string>
#include <vector>

class Solution {
public:
    std::string longestCommonPrefix(std::vector<std::string>& strs) {
        std::string longest_common_prefix = std::string();

        // we can use a str of choice (e.g. the 1st)
        for (int index = 0; index < strs[0].length(); ++index) {
            for (const auto& str : strs) {
                if (str[index] != strs[0][index]) {
                    return longest_common_prefix;
                }
            }
            longest_common_prefix.append(1, strs[0][index]);
        }

        return longest_common_prefix;
    }
};
// @lc code=end