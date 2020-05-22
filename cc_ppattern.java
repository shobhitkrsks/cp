import java.util.*;

public class cc_ppattern {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int tc=sc.nextInt();
        while(tc-->0)
        {
            int n=sc.nextInt();
            int ar[][]=new int[n][n];
            int c=1;
            for(int i=0;i<n;i++)
            {
                int l=0,r=i;
                while(l<=r)
                {
                    ar[l][r-l]=c++;
                    l++;
                }
            }
            for(int i=1;i<n;i++)
            {
                int l=i,r=n-1;
                while(l<=n-1)
                {
                    ar[l][r]=c++;
                    l++;
                    r--;
                }
            }

            for(int i=0;i<n;i++)
            {
                for(int j=0;j<n;j++)
                    System.out.print(ar[i][j]+"\t");

                System.out.println();
            }
        }
        sc.close();
    }
}   