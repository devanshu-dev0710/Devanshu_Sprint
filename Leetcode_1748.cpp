#include <iostream>
#include <vector>
using namespace std;

// Leetcode 1784: Sum of unique elements

// You are given an integer array nums. The unique elements of an array are the elements that appear exactly once in the array.
// Return the sum of all the unique elements of nums.

// Algorithm:-
/*
1. Initialization: Create a fixed-size integer array 'freq' (size 101) initialized to 0. 
   This array will count the occurrences of each number (assuming numbers are 1 to 100 based on typical constraints).

2. Frequency Counting: Iterate through the input vector 'nums'.
   For each number 'num', increment the count at index 'num' in the 'freq' array (i.e., freq[num]++).

3. Calculate Sum: Initialize a variable 'sum' to 0.
   Iterate from index j = 1 up to 100 in the 'freq' array.
   If freq[j] is exactly equal to 1, it means the number 'j' appeared only once.
   Add 'j' to the 'sum'.

4. Return 'sum': The final 'sum' is the sum of all unique elements.
*/

class Solution{
public:
    int unique_sum(vector<int> &nums){
        int freq[100] = {0};
        for(int i=0;i<nums.size();i++){
            freq[nums[i]] = freq[nums[i]] + 1;
        }
        int sum = 0;
        for(int j=1;j<101;j++){
            if(freq[j] == 1){
                sum = sum + j;
            }
        }
        return sum;
    }
};

int main(){

    Solution sol;
    vector<int> nums = {1,2,3,5,1,90,50,80,90};
    cout << sol.unique_sum(nums) << endl;

return 0;
}