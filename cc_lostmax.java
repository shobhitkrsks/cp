import java.util.Arrays;
import java.util.Scanner;

public class cc_lostmax
{
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int tc=sc.nextInt();
        sc.nextLine();
        while(tc-->0)
        {
            String s=sc.nextLine();
            String str[]=s.split(" ");
            int n=str.length;
            long ar[]=new long[n];
            for(int i=0;i<n;i++)
            {
                ar[i]=Long.parseLong(str[i]);
            }

            Arrays.sort(ar);
            long l=ar[n-1],sl=ar[n-2];

            if(n-1==l)
                System.out.println(sl);
            else
                System.out.println(l);

        }
        sc.close();
    }
}