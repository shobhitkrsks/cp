import java.util.*;

public class cc_chefsq 
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

            int s=sc.nextInt();
            int sq[]=new int[s];
            for(int i=0;i<s;i++)
                sq[i]=sc.nextInt();

            boolean flag=true;
            for(int i=0;i<=n-s && flag;i++)
            {
                int j;
                for(j=0;j<s;j++)
                {
                    if(ar[i+j]!=sq[j])
                        break;
                }

                if(j==s)
                    flag=false;
                
            }
            if(!flag)
                System.out.println("Yes");
            else
                System.out.println("No");
        }
        sc.close();
    }
}