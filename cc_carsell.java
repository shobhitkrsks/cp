import java.util.Arrays;
import java.util.Scanner;

public class cc_carsell {
    public static void main(String[] args) {
        Scanner sc=new java.util.Scanner(System.in);
        int tc=sc.nextInt();
        int mod=1000000007;
        while(tc-->0)
        {
            int n=sc.nextInt();
            long ar[]=new long[n];
            for(int i=0;i<n;i++)
                ar[i]=sc.nextLong();

            Arrays.sort(ar);
            long profit=0;
            for(int i=n-1,j=0;i>=0;i--,j++)
            {
                if(ar[i]-j<=0)
                    break;
                else
                {
                    profit+=(ar[i]-j)%mod;
                }
            }
            System.out.println(profit%mod);
        }
        sc.close();
    }
}
/*
1 2 3 4 5 6
0 1 2 3 4
0 0 1 2 
0 0 0
*/