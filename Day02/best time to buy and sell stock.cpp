class Solution {
public:
    int maxProfit(vector<int>& prices) {
    //     int n=prices.size();
    //     int max_profit=0;
    //     int min_price=INT_MAX;
    //     for(int i=0;i<n;i++){
    //         if( prices[i]<min_price){
    //             min_price=prices[i];
    //         }
    //         else if(prices[i]-min_price>max_profit){
    //             max_profit=prices[i]-min_price;
    //         }
    //     }
    //   return max_profit;  
     int n=prices.size();
     int max_profit=0;
     int bestbuy=prices[0];
     for(int i=1; i<n; i++){
        if(prices[i]>bestbuy){
        max_profit=max(max_profit,prices[i]-bestbuy);
        }
    bestbuy=min(prices[i],bestbuy);
     }
   return max_profit; 
    }
};
