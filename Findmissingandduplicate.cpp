#include <iostream>
#include <stdio.h>
#include <bits/stdc++.h> 
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	   int arr[n];
	   for(int i=0 ; i < n ;++i)
	    cin>>arr[i];
	   int setbitt,xorr = arr[0];
	   int x , y;
	   for(int  i = 0 ; i < n ; ++i)
	     xorr = xorr^arr[i];
	    for(int i=1 ; i<= n ; ++i)
	     xorr = xorr^i;
	    setbitt = xorr & ~(xorr-1);
	    for(int i= 0 ; i < n ; ++i)
	    {
	        if(setbitt & arr[i])
	         x = x^arr[i];
	        else 
	        y = y^arr[i];
	    }
	    for(int  i = 1; i <= n; ++i)
	    {
	        if(setbitt & i)
	         x = x^i;
	        else
	         y = y^i;
	    }
	    cout<<x<<" "<<y<<endl;;
	}
	return 0;
}