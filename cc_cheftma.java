import java.util.Arrays;
import java.util.Collections;
import java.util.Scanner;

public class cc_cheftma
{
    public static void main(String[] args)
    {
        Scanner sc=new Scanner(System.in);
        int t=sc.nextInt();
        while(t--!=0)
        {
            Integer n=sc.nextInt();
            Integer k=sc.nextInt();
            Integer m=sc.nextInt();
            Integer a[]=new Integer[n];
            Integer b[]=new Integer[n];
            Integer c[]=new Integer[k];
            Integer d[]=new Integer[m];
            Integer e[]=new Integer[k+m];
            Integer diff[]=new Integer[n];

            for(int i=0;i<n;i++)
                a[i]=sc.nextInt();

            for(int i=0;i<n;i++)
            {
                b[i]=sc.nextInt();
                diff[i]=a[i]-b[i];
            }

            for(int i=0;i<k;i++)
            {
                c[i]=sc.nextInt();
                e[i]=c[i];
            }

            for(int i=0;i<m;i++)
            {
                d[i]=sc.nextInt();
                e[k+i]=d[i];
            }
            
            Arrays.sort(diff,Collections.reverseOrder());
            Arrays.sort(e,Collections.reverseOrder());           

            int p=0,sum=0;
            for(int i=0;i<n && p<(k+m);i++)
            {
                while(diff[i]<e[p])
                    p++;
                
                if(diff[i]>=e[p])
                {
                    diff[i]=diff[i]-e[p];
                    p++;
                }
            }
            for(int i=0;i<n;i++)
                sum+=diff[i];
                
            System.out.println(sum);
        }
        sc.close();
    }
}