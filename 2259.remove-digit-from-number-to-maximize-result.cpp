/*
 * @lc app=leetcode id=2259 lang=cpp
 *
 * [2259] Remove Digit From Number to Maximize Result
 */

// @lc code=start
#include <string>

class Solution
{
public:
    std::string removeDigit(std::string number, char digit)
    {
        std::string best = "";

        for (int index = 0; index < number.length(); index++)
        {
            if (number[index] != digit)
                continue;

            std::string candidate = number;
            candidate.erase(index, 1);

            // since all candidates have the same length (number.length() - 1)
            // we can keep lexicographical comparison 
            if (candidate > best)
                best = candidate;
        }

        return best;
    }
};
// @lc code=end