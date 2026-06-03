class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxProfit=0,Bestbuy=prices[0];
        for(int i=1;i<prices.size();i++){
            if(prices[i]>Bestbuy){
                maxProfit=max(maxProfit,prices[i]-Bestbuy);
            }
            Bestbuy=min(Bestbuy,prices[i]);
        }
        return maxProfit;
    }
};