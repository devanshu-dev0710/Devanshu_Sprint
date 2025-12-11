#include <iostream>
#include <vector>
using namespace std;

// Leetcode 189: Rotate Array

// Given an integer array nums, rotate the array to the right by k steps, where k is non-negative.

// Algorithm:-
// 1. find size n
// 2. compute k = k % n to handle cases where k > n
// 3. reverse the entire array
// 4. reverse the first k elements
// 5. reverse the last n-k elements
// 6. exit

class Solution{
public:
    void reverse(vector<int> &nums, int st, int end){
        while(st < end){
            swap(nums[st],nums[end]);
            st++;
            end--;
        }
    }
    void rotate_array(vector<int> &nums, int k){
        int n = nums.size();
        k = k % n;
        reverse(nums,0,n-1);
        reverse(nums,0,k-1);
        reverse(nums,k,n-1);
    }

};

int main(){

    Solution sol;
    vector<int> nums = {1,2,3,4,5,6};
    sol.rotate_array(nums,446);
    cout << "rotated array: ";
    for(int num: nums){
        cout << num << ", ";
    }
    
return 0; 
}