// Leecode 485: Max Consecutive Ones

//Given a binary array nums, return the maximum number of consecutive 1's in the array.

// Algorithm:-
/*
1. Initialization: Use two integer variables: 'max_count' to track the longest sequence 
   found overall, and 'count' to track the length of the current sequence. Both start at 0.

2. Linear Traversal: Iterate through the input array 'nums' element by element.
   - If the current element is 1: Increment 'count'. Immediately check and update 
     'max_count' to be the greater of its current value or the new 'count'.
   - If the current element is 0: The consecutive sequence is broken. Reset 'count' to 0.
   
3. Return Result: 'max_count' holds the final answer after the entire array is scanned.
*/
class Solution {
    public int max_consecutive_ones(int[] nums){
        int max_count = 0;
        int count = 0;
        for(int num: nums){
            if(num == 1){
                count += 1;
                max_count = Math.max(max_count, count);
            }else{
                count = 0;
            }
        }
        return max_count;
    }
}
public class Leetcode_485 {
    public static void main(String[] args) {
        
        Solution sol = new Solution();
        int[] nums = {1,1,0,1,1,1};
        System.out.println(sol.max_consecutive_ones(nums));
        
    }
}
