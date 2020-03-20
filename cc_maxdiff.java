import java.util.Arrays;

import java.util.Scanner;

public class cc_maxdiff
{
    public static void main(String[] args)
    {
        Scanner sc=new Scanner(System.in);
	    int t;
	    t=sc.nextInt();
	    while(t--!=0)
	    {
	        int n,k;
	        n=sc.nextInt();
	        k=sc.nextInt();
	        
	        long w[]=new long[n];
	        long sum=0;
	        for(int i=0;i<n;i++)
	        {
	            w[i]=sc.nextLong();
	            sum+=w[i];
            }
            
	        
            Arrays.sort(w);
            System.out.println("Sum is: "+sum+", Sorted Array:");
            for(int i=0;i<n;i++)
	        {
	            System.out.print(w[i]+" ");
            }
            System.out.println();
	        
	        int remain=n-k;
	        int small=k<=remain?k:remain;
            long newsum=0;
            System.out.println("Small is: "+small);
	        
	        for(int i=0;i<small;i++)
	        {
	            newsum+=w[i];
	        }
	        sum=sum-newsum;
            
            System.out.println("Newsum="+newsum+", sum="+sum);
	        
	        System.out.println(sum-newsum);
	        
	    }
	    sc.close();
    }
}