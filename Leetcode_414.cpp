#include <iostream>
#include <vector>
#include <algorithm>  // for sort function
using namespace std;

// Leetcode 414: Third Maximum Number

// Given an integer array nums, return the third distinct maximum number in this array. If the third maximum does not exist, return the maximum number.

// Algorithm:-

// 1. sort the given array
//    (Required so that remove_duplicates can function and the largest elements are at the end)

// 2. Call remove_duplicates() function (made in Leetcode 26 problem)
//    Store the returned count of unique elements in 'x'.
//    (The unique elements now occupy nums[0] to nums[x-1]).

// 3. Check for the existence of the third maximum unique element (THE CRITICAL FIX):
//    if (x >= 3):
//        // If there are 3 or more unique elements, the third maximum exists.
//        // return the element at index x - 3 (the last third element of the unique array).
//        return nums[x-3];
//    else:
//        // If there are fewer than 3 unique elements (x=1 or x=2), return the overall maximum.
//        // The maximum element is always at index x - 1.
//        return nums[x-1];

// 4. exit

class Solution{
public:
    int remove_duplicates(vector<int> &nums){
        int idx = 0;
        for(int i=1;i<nums.size();i++){
            if(nums[i]!=nums[idx]){
                idx++;
                nums[idx] = nums[i];
            }
        }
        return idx + 1;
    }
    int third_max(vector<int> &nums){
        sort(nums.begin(),nums.end());
        int n = nums.size();
        if(n < 3) return nums[n-1];
        else{
            int x = remove_duplicates(nums);
            if (x >= 3) {
            // Third largest unique element is at the x-3 index
                return nums[x - 3];
            } else {
            // If there are fewer than 3 unique elements, 
            // return the largest element (which is at index x-1)
                return nums[x - 1];
            }
        }
    }
};

int main(){

    Solution sol;
    vector<int> nums = {4,2,6,6,6,5,5,3,1};
    cout << sol.third_max(nums) << endl;

return 0;
}