// Leetcode 136: Single Number
/*
Given a non-empty array of integers nums, every element appears twice except for one. Find that single one.
You must implement a solution with a linear runtime complexity and use only constant extra space.
*/
// Algorithm:-
/*
1. Initialization: Initialize the result variable 'ans' to 0. Since A XOR 0 = A, 
   starting at 0 preserves the first element's value.

2. Iterative XOR: Iterate through every number 'num' in the input array 'nums'.
   - Apply the Bitwise XOR operation: ans = ans ^ num.
   
3. Cancellation Principle: Due to the properties of XOR (A^A = 0, and A^B^A = B):
   - Every number that appears twice cancels itself out (e.g., 4^1^2^1^2 -> 4^(1^1)^(2^2) -> 4^0^0 -> 4).

4. Return Result: The final value of 'ans' is the single number.
*/
class Solution{
    int single_number(int[] nums){
        int ans = 0;
        for(int i=0;i<nums.length;i++){
            ans = ans ^ nums[i];
        }
        return ans;
    }
}

public class Leetcode_136 {
    public static void main(String[] args){
        
        Solution sol = new Solution();
        int nums[] = {4,1,2,1,2};
        System.out.println(sol.single_number(nums));
    }
    
}
