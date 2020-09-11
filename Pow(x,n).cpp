class Solution {
public:
    double myPow(double x, int n) {
     long long int nt=(long long int)n;
        double ans=1;
        if(n<0)
            nt=-nt;
        
        while(nt)
        {
            if(nt%2==1)
            {
                ans=ans*x;
                nt--;
               
                
            }
            else
            {
                x=x*x;
                nt/=2; 
            }
        }
        if(n<0)
            return (double)1/ans;
        
        return ans;
        
        
    }
};