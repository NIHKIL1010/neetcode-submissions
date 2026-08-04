class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit=0;
        int maxSell=prices[prices.size()-1];

        for(int i=prices.size()-2;i>=0;i--){
            if(prices[i]>maxSell){
                maxSell=prices[i];
                
            }
            else{
                profit=max(profit,maxSell-prices[i]);
                cout<<profit;
            }
        }
        return profit;
    }
};
