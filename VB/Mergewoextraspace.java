/*package whatever //do not write package name here */

import java.io.*;
import java.util.*;
class prg {
	public static void main (String[] args) {
	Scanner sc=new Scanner(System.in);
	int n=sc.nextInt();
	int m=sc.nextInt();
	int a1[]=new int[n];
	int a2[]=new int[m];
	for(int i=0;i<n;i++)
	a1[i]=sc.nextInt();
	for(int i=0;i<m;i++)
	a2[i]=sc.nextInt();
	int gap=(n+m)/2+(n+m)%2;
	for(int k=gap;k>0;k=k/2+k%2)
	{
	    int i=0;
	    int j=0;
	    int temp=0;
	    for(i=0;i+k<n;i++)
	    {
	        if(a1[i]>a1[i+k])
	        {
	            temp=a1[i];
	            a1[i]=a1[i+k];
	            a1[i+k]=temp;
	        }
	    }
	    for(j= k>n?k-n:0;j<m &&i <n;i++,j++)
	    {
	        if(a1[i]>a2[j])
	        {
	            temp=a1[i];
	            a1[i]=a2[j];
	            a2[j]=temp;
	        }
	    }
	    if(j<m)
	    {for(j=0;j+k<m;j++)
	    {
	        if(a2[j]>a2[j+k])
	        {
	            temp=a2[j];
	            a2[j]=a2[j+k];
	            a2[j+k]=temp;
	        }
	    }
	    }
	    
	    if(k==1)
	    k=0;
	}
	for(int p=0;p<n;p++)
	{
	    System.out.print(a1[p]+" ");
	}
	System.out.println();
	for(int j=0;j<m;j++)
	{
	    System.out.print(a2[j]+" ");
	}
	}
}