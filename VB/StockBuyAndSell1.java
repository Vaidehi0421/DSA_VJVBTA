class Solution {
    public int maxProfit(int[] prices) {
        if(prices.length<=1)
            return 0;
        int min=prices[0];
        int max=Integer.MIN_VALUE;
        int temp=0;
        for(int i=1;i<prices.length;i++)
        {
            if(prices[i]>min)
            {
                if(prices[i]-min>temp)
                    temp=prices[i]-min;
            }
            if(prices[i]<min)
                min=prices[i];
        }
        return temp;
    }
}