import java.util.*;

public class cc_chefarrp
{
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        int t=sc.nextInt();
        while(t-->0)
        {
            int n=sc.nextInt();
            int ar[]=new int[n];
            for(int i=0;i<n;i++)
                ar[i]=sc.nextInt();
            
            int sumdp[][]=new int[n][n];
            int prodp[][]=new int[n][n];
            //Arrays.fill(sumdp,0);
            //Arrays.fill(prodp,1);

            for(int i=0;i<n;i++)
            {
                sumdp[i][i]=ar[i];
                prodp[i][i]=ar[i];
            }

            int count=n;
            for(int i=1;i<n;i++)
            {
                for(int j=i-1;j>=0;j--)
                {
                    sumdp[j][i]=ar[j]+sumdp[j+1][i];
                    prodp[j][i]=ar[j]*prodp[j+1][i];
                    if(sumdp[j][i]==prodp[j][i])
                        count++;
                }
            }
            /*
            for(int i=0;i<n;i++)
            {
                for(int j=0;j<n;j++)
                    System.out.print(sumdp[i][j]+" ");

                System.out.print("\n");
            }
            for(int i=0;i<n;i++)
            {
                for(int j=0;j<n;j++)
                    System.out.print(prodp[i][j]+" ");

                System.out.print("\n");
            }
            */
            System.out.println(count);

        }
        sc.close();
    }
}