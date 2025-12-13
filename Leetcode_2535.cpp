#include <iostream>
#include <vector>
using namespace std;

// Leetcode 2535: Difference between Element Sum and Digit Sum
/*
You are given a positive integer array nums.
The element sum is the sum of all the elements in nums.
The digit sum is the sum of all the digits (not necessarily distinct) that appear in nums.
Return the absolute difference between the element sum and digit sum of nums.

Note that the absolute difference between two integers x and y is defined as |x - y|.
*/
// Algorithm:-
/*
1. Initialize Sums: Two integer variables, element_sum and digit_sum, are initialized to 0. These will hold the sum of the elements and the sum of the digits, respectively.
2. Iterate Through Elements: A for loop iterates through each element in the input vector nums.
   - For each element, it is added to element_sum.
   - A nested while loop is used to extract and sum the digits of the current element:
        - The last digit of the element is obtained using the modulus operator (x % 10) and added to digit_sum.
        - The element is then divided by 10 (integer division) to remove the last digit.
        - This process continues until all digits of the element have been processed (i.e., x becomes 0).
3. Calculate Difference: After processing all elements, the function returns the difference between element_sum and digit_sum.
*/
class Solution{
public:
    int difference_sum(vector<int> &nums){
        int element_sum = 0;
        int digit_sum = 0;
        for(int i=0;i<nums.size();i++){
            element_sum = element_sum + nums[i];
            int x = nums[i];
            while(x > 0){
                digit_sum = digit_sum + (x % 10);
                x = x / 10;
            }
        }
        return element_sum - digit_sum;
    }
};

int main(){

    Solution sol;
    vector<int> nums = {1,15,6,3};
    cout << sol.difference_sum(nums) << endl;

return 0;
}