class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buy = prices[0];
        int profit = 0;
        int curr_profit;
        for(int i = 1; i < prices.size(); i++){
            if (prices[i] < buy){
                buy = prices[i];
            }
            curr_profit = (prices[i] - buy) ;
            if (curr_profit > profit) {
                profit = curr_profit;
            }
        }
        return profit;
    }
};

// Approach
// Initialize variables buy with the first element of the prices array and profit as 0.
// Iterate through the prices starting from the second element.
// Update the buy variable if the current price is lower than the current buying price.
// Update the profit if the difference between the current price and the buying price is greater than the current profit.
// Return the final profit.
