import java.util.Scanner;

public class cc_sumtrian
{
    static int dfs(int ar[][],int i,int j,int n)
    {
        if(i==n)
            return 0;
        else
        {
            return Math.max((ar[i][j]+dfs(ar,i+1,j,n)), ar[i][j]+dfs(ar,i+1,j+1,n));
        }
    }
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        int t=sc.nextInt();
        while(t-->0)
        {
            int n=sc.nextInt();
            int ar[][]=new int[n][n];
            for(int i=0;i<n;i++)
            {
                for(int j=0;j<=i;j++)
                    ar[i][j]=sc.nextInt();
            }

            int sum=dfs(ar,0,0,n);
            System.out.println(sum);
        }
        sc.close();
    }
}