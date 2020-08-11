#include <iostream>
#include <math.h>
using namespace std;
//typedef long long int li;
int Nextg(int gap)
{
    if(gap<=1)
     return 0;
    return gap/2 + gap%2;
}
int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n,m;
	    cin>>n>>m;
	    int a[n],b[m];
	    for(int i = 0; i < n; ++i)
	     cin>>a[i];
	     for(int j = 0 ; j < m; ++j)
	      cin>>b[j];
	      int gap = n+m;
	      int i , j;
	      for(gap = Nextg(gap); gap > 0 ; gap = Nextg(gap))
	      {
	          for( i = 0; i+gap  < n ; ++i)
	             if(a[i]>a[i+gap])
	              swap(a[i],a[i+gap]);
	          for(j = gap>n? gap-n : 0 ; i < n&&j < m ; ++i,++j)
	              if(a[i] > b[j])
	               swap(a[i],b[j]);
	           if(j < m)
	           {
	               for(j = 0 ; j+gap < m ; ++j)
	                if(b[j] > b[j+gap])
	                 swap(b[j],b[j+gap]);
	           }
	      }
	      for(i = 0; i < n ; ++i)
	       cout<<a[i]<<" ";
	      for(j = 0 ; j < m; ++j)
	       cout<<b[j]<<" ";
	    cout<<endl;
	      
	}
	return 0;
}