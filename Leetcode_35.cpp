#include <iostream>
#include <vector>
using namespace std;

// Leetcode 35: Search Insert Position

// Given a sorted array of distinct integers and a target value, return the index if the target is found. If not, return the index where it would be if it were inserted in order.
// You must write an algorithm with O(log n) runtime complexity.

// Algorithm:-
// 1. Travesre the array from 0 to n-1
// 2. for each elememt:
//          if nums[i] >= target, return i
// 3. if the loop finishes without finding, return n
// 4. exit

class Solution{
public:
    int search_insert_poistion(vector<int> &nums, int target){
        for(int i=0;i<nums.size();i++){
            if(nums[i] >= target){
                return i;
            }
        }
        return nums.size();
    }    
};

int main(){

    Solution sol;
    vector<int> nums = {1,3,5,6};
    cout << sol.search_insert_poistion(nums,5) << endl;

return 0;
}