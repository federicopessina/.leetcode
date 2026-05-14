/*
 * @lc app=leetcode id=2549 lang=cpp
 *
 * [2549] Count Distinct Numbers on Board
 */

// @lc code=start
#include <algorithm>
#include <cmath>
#include <unordered_set>

class Solution {
public:
    int distinctIntegers(int n) {
        // note: non-math solution that whould be -> return max(n - 1, 1);

        std::unordered_set<int> distinct_numbers;

        if (n == 1 || n == 2)
            return 1;

        for (int i = 0; i < std::pow(10, 9); i++)
        {
            for (int j = 1; j < n; j++)
            {
                // calculate the procedure and store the result
                if (i % j == 1)
                    distinct_numbers.insert(i);

                // case: all possible numbers are already found, we can stop
                if (distinct_numbers.size() == (n - 1))
                    return distinct_numbers.size();
            }
        }

        // note: too long to reach
        return distinct_numbers.size();
    }
};
// @lc code=end

