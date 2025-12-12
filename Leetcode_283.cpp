#include <iostream>
#include <vector>
using namespace std;

// Leetcode 283: Move Zeroes
/*
Given an integer array nums, move all 0's to the end of it while maintaining the relative order of the non-zero elements.
Note that you must do this in-place without making a copy of the array.
*/
// Algorithm:-
/*
The goal is to move all zeroes to the end of the array while maintaining the 
relative order of the non-zero elements, all done in-place.

The solution uses a two-pass, two-pointer approach:

1. Initialization: Initialize a pointer 'idx' (the slow pointer) to 0. This pointer 
   tracks the position where the next non-zero element should be placed.

2. First Pass (Copy Non-Zeroes): Iterate through the array using a fast pointer 'i' (from 0 to n-1).
   - If (nums[i] != 0): The element is non-zero.
     -> Copy the non-zero element to the position marked by 'idx' (nums[idx] = nums[i]).
     -> Increment 'idx'.
   After this pass, all non-zero elements will be correctly positioned at the beginning 
   of the array (from index 0 up to idx-1), and the remaining positions (from idx to n-1) 
   will contain old, potentially non-zero values that need to be overwritten.

3. Second Pass (Fill Zeroes): Use a 'while' loop starting from the current position of 'idx' 
   up to the end of the array (idx < n).
   -> Fill the remaining positions with 0 (nums[idx] = 0).
   -> Increment 'idx'.
*/

class Solution{
public:
    void move_zeroes(vector<int> &nums){
        int n = nums.size();
        int idx = 0;
        for(int i=0;i<n;i++){
            if(nums[i] != 0){
                nums[idx] = nums[i];
                idx++;
            }
        }
        while(idx < n){
            nums[idx] = 0;
            idx++;
        }
    }
};
int main(){

    Solution sol;
    vector<int> nums = {0,1,0,3,12};
    sol.move_zeroes(nums);
    for(int i=0;i<nums.size();i++){
        cout << nums[i] << " ";
    }
    cout << endl;

return 0;
}