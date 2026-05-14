/*
 * @lc app=leetcode id=1796 lang=cpp
 *
 * [1796] Second Largest Digit in a String
 */

// @lc code=start
#include <string>
#include <cctype>

class Solution
{
public:
    int secondHighest(std::string s)
    {
        int highest = -1, secondHighest = -1;

        for (const auto &c : s)
        {
            if (!std::isdigit(static_cast<unsigned char>(c)))
                continue;
            
            // convert a digit character from ASCII into its numeric value 
            int candidate = c - '0';

            if (candidate > highest)
            {
                secondHighest = highest;
                highest = candidate;
            }
            else if (candidate > secondHighest && candidate < highest)
            {
                secondHighest = candidate;
            }
        }

        return secondHighest;
    }
};
// @lc code=end