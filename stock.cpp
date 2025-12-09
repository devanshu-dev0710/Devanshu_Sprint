#include <iostream>
#include <vector>
using namespace std;

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