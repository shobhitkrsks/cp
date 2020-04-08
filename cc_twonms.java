import java.util.*;

public class cc_twonms 
{
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
	    int t=sc.nextInt();
	    while(t-->0)
	    {
	        long a=sc.nextLong();
	        long b=sc.nextLong();
            long n=sc.nextLong();

            long r2=b;
            long r1;
            if(n%2==0)
                r1=a;
            else 
                r1=a*2;

            long result=Math.max(r1, r2)/Math.min(r1, r2);
            System.out.println(result);
	    }
	    sc.close();
    }
}