import java.math.BigInteger;
import java.util.Scanner;

public class cc_talazy 
{
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        int tc=sc.nextInt();
        sc.nextLine();
	    while(tc-->0)
	    {
	        String ns=sc.next();
	        String bs=sc.next();
            String ms=sc.next();
            BigInteger n=new BigInteger(ns);
            BigInteger b=new BigInteger(bs);
            BigInteger m=new BigInteger(ms);
            BigInteger duration=new BigInteger("0");
            BigInteger two=new BigInteger("2");
            BigInteger zero=new BigInteger("0");
	        while(!n.equals(zero))
	        {
	            if(n.remainder(two)==zero)
	            {
                    BigInteger temp=n;
                    temp.divide(two);
                    temp.multiply(m);
                    duration.add(b);
                    duration.add(temp);
	            }
	            else
	            {
                    BigInteger temp=n;
                    temp.add(new BigInteger("1"));
                    temp.divide(two);
                    temp.multiply(m);
                    duration.add(b);
                    duration.add(temp);
	            }
                n.divide(two);
                m.multiply(two);
	        }
	        duration.subtract(b);
	        System.out.println(duration);
	    }
	    sc.close();
    }
}