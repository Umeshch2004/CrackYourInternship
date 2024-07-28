//Link: https://leetcode.com/problems/best-time-to-buy-and-sell-stock/description/

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int least = prices[0];
        int maxdiff = 0;
        for(int i=0;i<prices.size();i++)
        {
            int diff = prices[i]-least;
            maxdiff = max(maxdiff, diff);
            least = min(least, prices[i]);
        }
        return maxdiff;
    }
};