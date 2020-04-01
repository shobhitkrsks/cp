import java.util.*;

public class cc_altaray
{
    public static int signum(int i)
    {
        if(i>0)
            return 1;
        else if(i<0)
            return -1;
        else return 0;
    }
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        int t=sc.nextInt();
        while(t-->0)
        {
            int n=sc.nextInt();
            int ar[]=new int[n];
            int result[]=new int[n];
            result[n-1]=1;
            //Arrays.fill(result,1);
            for(int i=0;i<n;i++)
                ar[i]=sc.nextInt();

            /*for(int i=1;i<n;i++)
            {
                if(signum(ar[i])!=signum(ar[i-1]))
                {
                    result[i]=result[i-1]+1;
                }
            }
            for(int i=n-1;i>=0;i--)
            {
                if(result[i]!=1)
                {
                    int temp=result[i];
                    
                    int counter=1;
                    while(temp-->0)
                    {
                        result[i]=counter++;
                        i--;
                    }
                    i++;
                }
            }*/

            for(int i=n-2;i>=0;i--)
            {
                if(signum(ar[i])!=signum(ar[i+1]))
                    result[i]=result[i+1]+1;
                else
                    result[i]=1;
            }

            for(int i=0;i<n;i++)
                System.out.print(result[i]+" ");
            System.out.println();
        }
        sc.close();
    }
}
