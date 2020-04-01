import java.util.Arrays;
import java.util.Scanner;

public class cc_twtclose
{
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        int k=sc.nextInt();
            sc.nextLine();
        boolean ar[]=new boolean[n];
        Arrays.fill(ar, Boolean.FALSE);
        int count=0;
        while(k-->0)
        {
            String s=sc.nextLine();
            if(s.equals("CLOSEALL"))
            {
                count=0;
                Arrays.fill(ar,Boolean.FALSE);
            }
            else
            {
                String[] z=s.split(" ");
                int i=Integer.valueOf(z[1]);
                if(ar[i-1])
                {
                    count--;
                    ar[i-1]=false;
                }
                else
                {
                    count++;
                    ar[i-1]=true;
                }

            }
            System.out.println(count);
        }
        sc.close();
    }
}