//tle in java, use same c++ code
import java.util.Arrays;
import java.util.Scanner;

public class spoj_baised
{
    public static void main(String args[]) 
    {
        Scanner sc=new Scanner(System.in);   
        int t=sc.nextInt();
        while(t--!=0)
        {
            sc.nextLine();
            sc.nextLine();

            int n=sc.nextInt();
            long pref[]=new long[n];
            for(int i=0;i<n;i++)
            {
                sc.next();
                pref[i]=sc.nextLong();
            }

            Arrays.sort(pref);
            long sum=0;

            for(int i=0;i<n;i++)
            {
                sum+=Math.abs(pref[i]-(i+1));
            }
            System.out.println(sum);
        }    
        sc.close();
    }
}