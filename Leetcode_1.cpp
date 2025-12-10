#include <iostream>
#include <vector>
using namespace std;

// Leetcode 1: Two Sum

// Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.
// You may assume that each input would have exactly one solution, and you may not use the same element twice.
// You can return the answer in any order.

// Algorithm:-
// 1. use two loops:
//         outer loop i from 0 to n-1
//         inner loop j from i+1 to n-1
// 2. for each pair (i,j):
//         if nums[i] + nums[j] == target:
//                 return {i,j}                
// 3. if no pair found, return {}
// 4. exit   

class Solution {
public:
    vector<int> two_sum(vector<int> &nums,int target){
        vector<int> result;
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                if(nums[i]+nums[j]==target){
                    result.push_back(i); 
                    result.push_back(j);
                    return result;
                }
            }
        }
        return result; 
    }
};

int main(){

    Solution sol;
    vector<int> nums = {2,7,11,15};
    int target = 9;
    vector<int> result_indices = sol.two_sum(nums, target); 
    
    // 2. Access the elements from the stored variable
    if(!result_indices.empty()){
        cout << "Indices: [" << result_indices[0] << ", " << result_indices[1] << "]" << endl;
    } else {
        cout << "No two sum solution found." << endl;
    }

return 0;
}