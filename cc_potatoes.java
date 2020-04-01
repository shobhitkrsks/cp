import java.util.Scanner;
import java.util.Vector;

public class cc_potatoes
{
    static class primelist
    {
        Vector<Integer> list=new Vector<>();
        int size;
        primelist()
        {
            for(int i=1;i<=2000;i++)
            {
                boolean isprime=true;

                if(i==2 || i==3)
                    isprime=true;
                else if(i==1 || i%2==0 || i%3==0)
                    isprime=false;
                else
                {
                    for(int j=5;j*j<=i && isprime;j+=6)
                    {
                        if(i%j==0 || i%(j+2)==0)
                        {
                            isprime=false;
                        }
                    }
                }

                if(isprime)
                    list.add(i);
            }
            boolean flag=false;
            int i=2001;
            while(!flag)
            {
                boolean isprime=true;
                if(i%2==0 || i%3==0)
                    isprime=false;
                else
                {
                    for(int j=5;j*j<=i && isprime;j+=6)
                    {
                        if(i%j==0 || i%(j+2)==0)
                        {
                            isprime=false;
                        }
                    }
                }

                if(isprime)
                {
                    list.add(i);
                    flag=true;
                }   
                else
                {
                    i++;
                } 
            }

            size=list.size();
        }

        int getnextprime(int k)
        {
            int retval=0;
            for(int i=0;i<size;i++)
            {
                if(list.get(i)>k)
                {
                    retval=list.get(i);
                    break;
                }
            }
            return retval;
        }
    }
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        primelist list=new primelist();
        int t=sc.nextInt();
        while(t-->0)
        {
            int x=sc.nextInt();
            int y=sc.nextInt();
            int temp=list.getnextprime(x+y);
            int z=temp-x-y;
            System.out.println(z);
        }
        sc.close();
    }
}