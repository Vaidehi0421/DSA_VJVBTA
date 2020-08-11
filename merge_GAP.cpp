#include <stdio.h>
	#include <bits/stdc++.h> 
using namespace std;
// Function to find next gap. 
int nextGap(int gap) 
{ 
    if (gap <= 1) 
        return 0; 
    return (gap / 2) + (gap % 2); 
} 
int main() {
 int t;
 cin>>t;
 while(t--)
 { int n,m;
 cin>>n>>m;
 int arr1[n],arr2[m];
 for(int v=0;v<n;v++)
 cin>>arr1[v];
 for(int v=0;v<m;v++)
 cin>>arr2[v];
    int i, j, gap = n + m; 
    for (gap = nextGap(gap); gap > 0; gap = nextGap(gap)) 
    { 
        
        for (i = 0; i + gap < n; i++) 
            if (arr1[i] > arr1[i + gap]) 
                swap(arr1[i], arr1[i + gap]); 
  
       
        for (j = gap > n ? gap-n : 0 ; i < n&&j < m; i++, j++) 
            if (arr1[i] > arr2[j]) 
                swap(arr1[i], arr2[j]); 
  
        if (j < m) 
        { 
            //comparing elements in the second array. 
            for (j = 0; j + gap < m; j++) 
                if (arr2[j] > arr2[j + gap]) 
                    swap(arr2[j], arr2[j + gap]); 
        } 
    }
    for(int v=0;v<n;v++)
    cout<<arr1[v]<<" ";
    //cout<<endl;
    for(int v=0;v<m;v++)
    cout<<arr2[v]<<" ";
    cout<<endl;
 }
	return 0;
}