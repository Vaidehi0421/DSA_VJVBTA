/*package whatever //do not write package name here */

import java.util.*;
import java.lang.*;
import java.io.*;

class GFG {
    public static long MergeSort(int arr[],int low,int high)
    {   long inv=0;
        if(low<high)
        {
            int mid=low+(high-low)/2;
            inv+=MergeSort(arr,low,mid);
            inv+=MergeSort(arr,mid+1,high);
            inv+=Merge(arr,low,mid,high);
        }
        return inv;
    }
    public static long Merge(int arr[],int low,int mid,int high)
    {
        int left[]=Arrays.copyOfRange(arr,low,mid+1);
        int right[]=Arrays.copyOfRange(arr,mid+1,high+1);
        int i=0;
        int j=0;
        int k=low;
        long count=0;
        while(i<left.length&&j<right.length)
        {
            if(left[i]<=right[j])
            {
                arr[k++]=left[i++];
            }
            else
            {
                arr[k++]=right[j++];
                count+=(mid+1)-(low+i);
            }
        }
        while(i<left.length)
        {
            arr[k++]=left[i++];
        }
        while(j<right.length)
        {
            arr[k++]=right[j++];
        }
        return count;
    }
	public static void main (String[] args) {
	Scanner sc=new Scanner(System.in);
	int T=sc.nextInt();
	while(T-->0)
	{
	    int N=sc.nextInt();
	    int arr[]=new int[N];
	    for(int i=0;i<N;i++)
	    arr[i]=sc.nextInt();
	    long ans=MergeSort(arr,0,N-1);
	    System.out.println(ans);
	}
	}
}