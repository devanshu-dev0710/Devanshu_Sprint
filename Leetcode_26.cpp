#include <iostream>
#include <vector>
using namespace std;

// Leetcode 26: Remove Duplicates from Sorted array

// Given an integer array nums sorted in non-decreasing order, remove the duplicates in-place such that each unique element appears only once. The relative order of the elements should be kept the same.
// Consider the number of unique elements in nums to be k​​​​​​​​​​​​​​. After removing duplicates, return the number of unique elements k.
// The first k elements of nums should contain the unique numbers in sorted order. The remaining elements beyond index k - 1 can be ignored.

// Algorithm:-
// 1. if the array is empty, return 0
// 2. intialize idx = 0 (it keeps track of position for unique element)
// 3. for i from 1 to n-1:
//         if nums[i] != nums[idx]:
//                 increment idx = idx + 1
//                 nums[idx] = nums[i]
// 4. After the loop, return idx+1 as length of new array
 
class Solution{
public:
    int remove_duplicates(vector<int> &nums){
        if (nums.empty()) return 0;
        int idx = 0;
        for(int i=1;i<nums.size();i++){
            if(nums[idx] != nums[i]){
                idx++;
                nums[idx] = nums[i];
            }
        }
        return idx+1;
    }
};

int main(){

    Solution sol;
    vector<int> nums = {0,0,1,1,1,2,2,3,3,4};
    cout << sol.remove_duplicates(nums) << endl;

return 0;    
}