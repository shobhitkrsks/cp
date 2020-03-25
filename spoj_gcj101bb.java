import java.util.Scanner;

public class spoj_gcj101bb
{
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        int tc=sc.nextInt();
        int tk=tc;
        while(tc--!=0)
        {
            int n=sc.nextInt();
            int k=sc.nextInt();
            int b=sc.nextInt();
            int t=sc.nextInt();
            int x[]=new int[n];
            int v[]=new int[n];

            for(int i=0;i<n;i++)
                x[i]=sc.nextInt();
            for(int i=0;i<n;i++)
                v[i]=sc.nextInt();

            boolean finisher[]=new boolean[n];
            int nfin=0;
            for(int i=0;i<n;i++)
            {
                if(x[i]+v[i]*t>=b)
                {
                    nfin++;
                    finisher[i]=true;
                }
                else
                    finisher[i]=false;
            }
            if(nfin<k)
                System.out.println("Case #"+(tk-tc)+": IMPOSSIBLE");
            else
            {
                int swaps=0;
                int costswap=0;
                nfin=0;
                for(int i=n-1;i>=0;i--)
                {
                    if(finisher[i])
                    {
                        nfin++;
                        swaps+=costswap;
                    }
                    else
                    {
                        costswap++;
                    }

                    if(nfin==k)
                        break;
                }
                System.out.println("Case #"+(tk-tc)+": "+swaps);
            }
        }
        sc.close();
    }
}