#include <iostream>
#include <vector>
#include <algorithm> // for sort function
using namespace std;

// Leetcode 242: Valid Anagram

// Given two strings s and t, return true if t is an anagram of s, and false otherwise.

// Algorithm:-
// 1. if size of s1 string != size of s2 string , return
// 2. sort both the strings s1 and s2 
// 3. compare two sorted string if(s1 == s2), return true
//    else, return false
// 4. exit

class Solution{
public:
    void anagram(string &s1, string &s2){
        if(s1.size()!=s2.size()) cout << "not anagram" << endl;
        else{
            sort(s1.begin(),s1.end());
            sort(s2.begin(),s2.end());
            if(s1 == s2){
                cout << "given stings are anagram" << endl;
            } else{
                cout << "given strings are not anagram" << endl;
            }
        }
    }
};

int main(){

    Solution sol;
    string s = "race";
    string t = "care";
    sol.anagram(s,t);

return 0;    
}