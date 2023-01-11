#include "ArraysHashing.h"
#include "pch.h"

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