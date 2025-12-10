#include <iostream>
#include <vector>
using namespace std;

//Leetcode 27: Remove Element

// Given an integer array nums and an integer val, remove all occurrences of val in nums in-place. The order of the elements may be changed. Then return the number of elements in nums which are not equal to val.
// Consider the number of elements in nums which are not equal to val be k, to get accepted, you need to do the following things:
// Change the array nums such that the first k elements of nums contain the elements which are not equal to val. The remaining elements of nums are not important as well as the size of nums.
// Return k.

// Algorithm:-
// 1. Intialize a pointer idx = -1
// 2. traverse array from 0 to n-1
// 3. for each element:
// 4.         if nums[i] != val:
//                    increment idx = idx + 1
//                    nums[idx] = nums[i]
//            else: skip the iteration
// 5. after loop ends, return idx (new size)     
// 6. exit            

class Solution{
public: 
    int remove_element(vector<int> &nums,int val){
        int idx = -1;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=val){
                idx++;
                nums[idx] = nums[i];
            }
        }
        return idx+1;
    }
};

int main(){

    Solution sol;
    vector<int> nums = {3,2,2,3};
    cout << sol.remove_element(nums,3) << endl;
    
return 0;
}