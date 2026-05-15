/*
 * @lc app=leetcode id=2553 lang=cpp
 *
 * [2553] Separate the Digits in an Array
 */

// @lc code=start
#include <math.h>
#include <vector>

class Solution
{
public:
    int getNthLastDigit(int number, int n)
    {
        return (number / static_cast<int>(pow(10, n))) % 10;
    }

    int getNumberOfDigits(int number)
    {
        int count = 0;
        while (number > 0)
        {
            number /= 10;
            count++;
        }
        return count;
    }

    std::vector<int> separateDigits(std::vector<int> &nums)
    {
        std::vector<int> result;

        for (const auto &num : nums)
        {
            std::vector<int> digits;
            int number_of_digits = getNumberOfDigits(num);

            for (int index = number_of_digits - 1; index >= 0; --index)
            {
                int digit = getNthLastDigit(num, index);
                digits.push_back(digit);
            }
            
            result.insert(result.end(), digits.begin(), digits.end());
        }

        return result;
    }
};
// @lc code=end
