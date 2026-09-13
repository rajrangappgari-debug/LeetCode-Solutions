class Solution {
public:
    int maxProfit(vector<int>& prices) {
     int maxprof=0,bestbuy=prices[0] ;

     for(int i=1;i<prices.size();i++){
        if(prices[i]>bestbuy){
            maxprof=max(maxprof,prices[i]-bestbuy);//to sell  at high price  
        }
        bestbuy=min(bestbuy,prices[i]);//to buy a stock in min price 
     }  
     return maxprof;

    }
};