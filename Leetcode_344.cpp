#include <iostream>
#include <vector>
using namespace std;

// Leetcode 344: Reverse string 

// Write a function that reverses a string. The input string is given as an array of characters s.
// You must do this by modifying the input array in-place with O(1) extra memory.

// Algorithm:-
// 1. intialize two pointers:
//         st = 0 (Start index)
//         end = n-1 (end index)
// 2. while a < b:
//         swap s[st] with s[end] 
//         increment st = st + 1
//         decrement end = end - 1
// loop will end when two pinters cross each other        
// 3. exit

class Solution{
public:
    void reverse_string(string &s){
        int st = 0;
        int end = s.size()-1;
        while(st<end){
            swap(s[st],s[end]);
            st++;
            end--;
        }
    }
};
int main(){

    Solution sol;
    string s = "hello";
    sol.reverse_string(s);
    cout << "reverse string : " ;
    for(char str:s){
        cout << str << ", " ;
    }

return 0;
}