/*
 * @lc app=leetcode id=9 lang=cpp
 *
 * [9] Palindrome Number
 */

// @lc code=start
#include <cmath>

class Solution
{
public:

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

    /// @brief Get the nth last digit of a number.
    /// @param number 
    /// @param position 
    /// @example getNthLastDigit(12345, 0) returns 5, getNthLastDigit(12345, 1) returns 4, getNthLastDigit(12345, 2) returns 3, and so on.
    int getNthLastDigit(int number, int n)
    {
        return (number / static_cast<int>(pow(10, n))) % 10;
    }

    bool isPalindrome(int x)
    {
        // note: solve it without converting the integer to a string

        // Negative numbers are not palindromes
        if (x < 0)
            return false;

        // Single digit numbers are palindromes
        if (x < 10)
            return true;

        int numberOfDigits = getNumberOfDigits(x);

        for (int index = 0; index < numberOfDigits / 2; index++)
        {
            int rightDigit = getNthLastDigit(x, index);
            int leftDigit = getNthLastDigit(x, (numberOfDigits - 1) - index);

            if (leftDigit != rightDigit)
                return false;
        }
        return true;
    }
};
// @lc code=end
