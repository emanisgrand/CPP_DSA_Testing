#include "ArraysHashing.h"
#include "pch.h"

using std::qsort;

bool ContainsDuplicates::BruteForce(vector<int>& nums)
{
    // 0. flag set to false
    bool flag = false;
    // 1. loop through nums 
    for (int i = 0; i < nums.size(); i++)
    {
        // 1. inner loop just to the right of outer loop
        for (int j = i + 1; j < nums.size(); j++)
        {
            // 1. if they are dupes, return true
            if (nums[i] == nums[j]) return true;
        }
    }
    // return whatever flag is 
    return flag;
}

bool ContainsDuplicates::SortedSolution(vector<int>& nums)
{
    // 0. sort function from beginning of nums to end of nums
    std::sort(nums.begin(), nums.end());
    // 1. set flag to false.
    bool flag = false;

    // 2. loop through 
    for (int i = 0; i < nums.size(); i++)
    {
        // 1. compare current index to index plus 1 
        if (nums[i] == nums[i+1]) return true;
    }

    // return flag
    return flag;
}