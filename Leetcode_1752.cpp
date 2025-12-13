#include <iostream>
#include <vector>
using namespace std;

// Leetcode 1752: Check if Array Is Sorted and Rotated
/*
Given an array nums, return true if the array was originally sorted in non-decreasing order, then rotated some number of positions (including zero). Otherwise, return false.
There may be duplicates in the original array.
Note: An array A rotated by x positions results in an array B of the same length such that B[i] == A[(i+x) % A.length] for every valid index i.
*/
// Algorithm:-
/*
1. Initialize Count: An integer variable 'count' is initialized to 0. This variable will keep track of the number of times an element is greater than the next element in the array.
2. Iterate Through Array: A for loop iterates through each element in the input vector 'nums'.
   - For each element at index 'i', it checks if nums[i] is greater than nums[(i + 1) % nums.size()]. The modulo operation ensures that the comparison wraps around to the start of the array when reaching the end.
   - If the condition is true, it increments the 'count' variable.
   - If at any point 'count' exceeds 1, the function returns false immediately, as this indicates that the array cannot be sorted and rotated.
3. Return Result: If the loop completes and 'count' is 0 or 1, the function returns true, indicating that the array is sorted and rotated.
*/
class Solution{
public:
    bool check(vector<int> &nums){
        int count = 0;
        for(int i=0;i<nums.size();i++){
            if(nums[i] > nums[(i+1) % nums.size()]){
                count++;
                if(count > 1){
                return false;
                }
            }
        }
        return true;
    }
};

int main(){

    Solution sol;
    vector<int> nums = {3,4,5,1,2};
    cout << sol.check(nums) << endl;

return 0;
}