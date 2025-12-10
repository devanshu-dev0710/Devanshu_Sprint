#include <iostream>
#include <vector>
using namespace std;

// Leetcode 121: Best time to buy and sell stock

// You are given an array prices where prices[i] is the price of a given stock on the ith day.
// You want to maximize your profit by choosing a single day to buy one stock and choosing a different day in the future to sell that stock.
// Return the maximum profit you can achieve from this transaction. If you cannot achieve any profit, return 0.

// Algorithm:-
// 1. Intialize min_price = first element(arr[0]), max_price = 0
// 2. Traverse the array:
//             if current price < min_price: (current price = arr[i])
//                     update min_price (min_price = arr[i])
//             else if profit > max_profit: (profit = arr[i] - min_price)
//                     max_profit = arr[i] - min_price
// 3. return max_profit   
// 4. exit

class Solution {
public:
    int stock(vector<int> &prices){
        int min_price = prices[0];
        int max_profit = 0;
        for(int i=1;i<prices.size();i++){
            if(prices[i] < min_price){
                min_price = prices[i];
            }else if((prices[i] - min_price) > max_profit){
                max_profit = prices[i] - min_price;
            }
        }
        return max_profit;
    }
};
int main(){

    Solution sol;
    vector<int> prices = {7,1,5,3,6,4};
    int max_profit = sol.stock(prices);
    cout << "Maximum Profit: " << max_profit << endl;
    
return 0;
}