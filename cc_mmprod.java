import java.util.Arrays;
import java.util.Scanner;

public class cc_mmprod
{
    public static void main(String args[]) 
    {
        Scanner sc=new Scanner(System.in);
        long mod=1000000007L;
        int t=sc.nextInt();
        while(t--!=0)
        {
            int n=sc.nextInt();
            int k=sc.nextInt();
            long ar[]=new long[n];
            long product=1;

            for(int i=0;i<n;i++)
            {
                ar[i]=sc.nextInt();
            }
            Arrays.sort(ar);

            if(ar[n-1]==0 && k%2==1)
            {
                product=0;
            } 
            else if(ar[n-1]<=0 && k%2==1)
            {
                for(int i=n-1;i>=n-k;i--)
                    product=(product*ar[i])%(mod);
            }
            else
            {
                int i=0,j=n-1,x=k;
                if(k%2==1 && ar[n-1]>0)
                {
                    product=(product*ar[n-1])%(mod);
                    j--;
                    x--;
                }
                x=x>>1;

                for(int p=0;p<x;p++)
                {
                    long lp=(ar[i]*ar[i+1]);
                    long rp=(ar[j]*ar[j-1]);

                    if(lp>=rp)
                    {
                        product=(product*lp)%(mod);
                        i+=2;
                    }
                    else
                    {
                        product=(product*rp)%(mod);
                        j-=2;
                    }
                }
            }

            System.out.println(product%mod);
           
        }
        sc.close();
    }
}