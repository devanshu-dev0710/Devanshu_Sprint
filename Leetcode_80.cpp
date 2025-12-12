#include <iostream>
#include <vector>
using namespace std;

// Leetcode 80: Remove Duplicates II
/*
Given an integer array nums sorted in non-decreasing order, remove some duplicates in-place such that each unique element appears at most twice. The relative order of the elements should be kept the same.
Since it is impossible to change the length of the array in some languages, you must instead have the result be placed in the first part of the array nums. More formally, if there are k elements after removing the duplicates, then the first k elements of nums should hold the final result. It does not matter what you leave beyond the first k elements.
Return k after placing the final result in the first k slots of nums.
Do not allocate extra space for another array. You must do this by modifying the input array in-place with O(1) extra memory.
*/
// Algorithm:-
/*
This problem requires an in-place modification of a sorted array to ensure that 
no element appears more than twice, returning the new length of the modified array.

The solution uses a two-pointer approach:
1. Edge Case: If the array size 'n' is 2 or less, no duplicates need to be removed, so return 'n'.

2. Initialization: Initialize a pointer 'idx' (the slow pointer) to 2. This pointer marks 
   the position where the next valid element (the one that maintains the "at most two occurrences" rule) 
   should be placed. The first two elements (nums[0] and nums[1]) are always considered valid.

3. Iteration and Placement: Iterate through the array using a fast pointer 'i' starting from index 2.
   The core logic is to check the current element nums[i] against the element two positions before 'idx': nums[idx - 2].
   
   - If (nums[i] != nums[idx - 2]): 
     This means nums[i] is different from the second-to-last placed valid element. If we place nums[i] at nums[idx], 
     it will be the first or second occurrence of its value in the new valid segment.
     -> Place nums[i] at nums[idx].
     -> Increment 'idx'.

   - If (nums[i] == nums[idx - 2]):
     This means nums[i] is the same as the third occurrence of the current number in the valid segment. 
     We skip this element and do not increment 'idx'.

4. Return Length: The final value of 'idx' is the new length of the array with at most two duplicates per element.
*/

class Solution{
public:
    int remove_duplicates_II(vector<int> &nums){
        int n = nums.size();
        if(n <= 2) return n;
        int idx = 2;
        for(int i=2;i<n;i++){
            if(nums[i] != nums[idx-2]){
                nums[idx] = nums[i];
                idx++;
            }
        }
        return idx;
    }
};

int main(){

    Solution sol;
    vector<int> nums = {1,1,1,2,2,3};
    cout << sol.remove_duplicates_II(nums) << endl;

return 0;
}