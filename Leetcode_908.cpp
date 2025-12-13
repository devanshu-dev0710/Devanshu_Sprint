#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

//Leetcode 908: Smallest Range I
/*
You are given an integer array nums and an integer k.
In one operation, you can choose any index i where 0 <= i < nums.length and change nums[i] to nums[i] + x where x is an integer from the range [-k, k]. You can apply this operation at most once for each index i.
The score of nums is the difference between the maximum and minimum elements in nums.
Return the minimum score of nums after applying the mentioned operation at most once for each index in it.
*/
// Algorithm:-
/*
1. Sort the Input: The input vector 'nums' is sorted in ascending order using the sort function.
2. Calculate Initial Difference: The initial difference 'diff' between the maximum and minimum elements of the sorted array is calculated as nums[nums.size() - 1] - nums[0].
3. Adjust the Difference: The potential reduction in the range is calculated as 2 * k (since we can add k to the minimum and subtract k from the maximum).
4. Return Result: The function returns the maximum of 0 and the adjusted difference (diff - 2 * k). This ensures that if the adjusted difference is negative, we return 0 instead.
*/
class Solution{
public:
    int smallest_range(vector<int> &nums, int k){
        sort(nums.begin(), nums.end());
        int diff = nums[nums.size() - 1] - nums[0];
        return max(0, diff - 2 * k);       
    }
};

int main(){

    Solution sol;
    vector<int> nums = {0,10};
    cout << sol.smallest_range(nums,2) << endl;

return 0;
}