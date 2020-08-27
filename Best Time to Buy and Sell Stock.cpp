class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxp=0;
        int minp=INT_MAX;
        for(int i=0;i<prices.size();i++)
        {
            minp=min(minp,prices[i]);
            maxp=max(maxp,prices[i]-minp);
        }
        return maxp;
    }
};