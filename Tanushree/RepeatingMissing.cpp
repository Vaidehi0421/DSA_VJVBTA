#include <iostream>
#include <stdio.h>
#include <bits/stdc++.h> 
using namespace std;
int main() {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	   int a[n];
	   for(int i=0 ; i < n ;++i)
	    cin>>a[i];
	   int setb,xo = a[0];
	   int x , y;
	   for(int  i = 0 ; i < n ; ++i)
	     xo = xo^a[i];
	    for(int i=1 ; i<= n ; ++i)
	     xo = xo^i;
	    setb = xo & ~(xo-1);
	    for(int i= 0 ; i < n ; ++i)
	    {
	        if(setb & a[i])
	         x = x^a[i];
	        else 
	        y = y^a[i];
	    }
	    for(int  i = 1; i <= n; ++i)
	    {
	        if(setb & i)
	         x = x^i;
	        else
	         y = y^i;
	    }
	    cout<<x<<" "<<y<<endl;;
	}
	return 0;
}