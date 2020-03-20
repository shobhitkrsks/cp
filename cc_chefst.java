import java.util.Scanner;

public class cc_chefst
{
    public static void main(String[] args)
    {
        Scanner sc=new Scanner(System.in);
        long t=sc.nextLong();

        while(t--!=0)
        {
            long n1=sc.nextLong();
            long n2=sc.nextLong();
            long m=sc.nextLong();
            
            long sum=0;

            if(m>=n1 || m>=n2)
            {
                if(n1<=n2)
                    sum=n2-n1;
                else
                    sum=n1-n2;
            }
            else
            {
                long x=(m*(m+1))/2;
                /* BigInteger x=new BigInteger("1");
                x=x.multiply(BigInteger.valueOf(m));
                x=x.multiply(BigInteger.valueOf(m+1));
                x=x.divide(BigInteger.valueOf(2)); */


                if(x<n1 && x<n2)
                {
                    sum=n1-x+n2-x;
                }
                else
                {
                    if(n1<=n2)
                        sum=n2-n1;
                    else
                        sum=n1-n2;
                }
            }

            System.out.println(sum);
        }
        sc.close();
    }
}