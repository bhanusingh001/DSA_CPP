/*
 * Problem: Best Buy Sell Stock
 * Description: ? Solve ?
 * Topic: Arrays
 * Date: 2026-04-02 23:42
 */

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxProfit = 0;
        int buyprice = prices[0];

        for (int i = 1; i < prices.size(); i++) {

            if (buyprice < prices[i]) {
                // if current price greater than our buy price
                maxProfit = max(maxProfit, prices[i] - buyprice);
            } else {
                // if current price is less than buy price
                buyprice = prices[i];
            }
        }

        return maxProfit;
    }
};