


int maxProfit(int* prices, int pricesSize){
    
    int i;
    int BuyPrice=0,Profit=0;
    
    //find Max
    for(i=0;i<pricesSize;i++)
        if(prices[i]>BuyPrice)
            BuyPrice=prices[i];
    
    
    for(i=0;i<pricesSize;i++)
        if(prices[i]<BuyPrice)
            BuyPrice=prices[i];
        else if (prices[i]-BuyPrice>Profit)
            Profit=prices[i]-BuyPrice;
    
    return Profit;
}
    //Method 01
   /* int maxprofit=0;
    int i,j;
    
    for(i=0;i<pricesSize-1;i++){ //find min
        //printf("%d",prices[j]);
        for(j=i+1;j<pricesSize;j++){
            //printf("%d ",prices[j]-prices[i]);
            if(prices[j]-prices[i]>maxprofit)
                maxprofit=prices[j]-prices[i];
        }
    }
    
    return maxprofit;*/
