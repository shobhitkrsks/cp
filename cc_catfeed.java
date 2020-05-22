import java.util.Arrays;
import java.util.Scanner;

public class cc_catfeed {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int tc=sc.nextInt();
        while(tc-->0)
        {
            int n=sc.nextInt();
            int m=sc.nextInt();
            boolean marked[]=new boolean[n];
            int ar[]=new int[m];

            for(int i=0;i<m;i++)
                ar[i]=sc.nextInt();
            
            int t;
            boolean flag=true;
            for(int i=0;i<m && flag;i++)
            {
                int c=0;
                Arrays.fill(marked, Boolean.FALSE);
                while(c<n && i<m) //c<m
                {
                    t=ar[i];
                    if(marked[t-1])
                    {
                        flag=false;
                        break;
                    }
                    else
                        marked[t-1]=true;

                    c++;
                    i++;
                }
                i--;
            }
            if(flag)
                System.out.println("YES");
            else
                System.out.println("NO");
        }
        sc.close();
    }

}