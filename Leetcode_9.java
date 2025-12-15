// Leetcode 9: Palindrome Number

//Given an integer x, return true if x is a palindrome, and false otherwise.

// Algorithm:-
/*
1. Edge Case Check: Immediately return false if the number is negative or if it ends 
   in zero (and is not zero itself), as these cannot be palindromes.

2. Initialization: Store the original value in a temporary variable 'temp' and initialize 
   'sum' (the reversed number) to 0.

3. Reversal Loop: Iterate while the original number 'x' is greater than 0.
   - Extract the last digit of 'x' using the modulo operator (x % 10).
   - Construct the reversed number 'sum' by multiplying it by 10 and adding the extracted digit.
   - Truncate the last digit of 'x' using integer division (x / 10).

4. Final Check: Once 'x' is 0, compare the fully reversed number ('sum') with the 
   original number ('temp'). If they match, the number is a palindrome.
*/

class Solution {
    public boolean isPalindrome(int x) {
        if (x < 0 || (x % 10 == 0 && x != 0 )){
            return false;
        }
        int temp = x;
        int sum = 0;
        while(x>0){
            int r = x % 10;
            sum = sum * 10 + r;
            x = x / 10;
        }
        return sum == temp;
    }
}

public class Leetcode_9 {
    public static void main(String[] args){
        
        Solution sol = new Solution();
        int x = 121;
        System.out.println(sol.isPalindrome(x));

    }
}
