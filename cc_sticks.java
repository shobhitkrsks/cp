//submitted in c++, works fine there same code
import java.util.Arrays;
import java.util.Scanner;

public class cc_sticks
{
    public static void main(String[] args)
    {
        Scanner sc=new Scanner(System.in);
        int t=sc.nextInt();

        while(t--!=0)
        {
            int n=sc.nextInt();
            Integer a[]=new Integer[n];

            for(int i=0;i<n;i++)
                a[i]=sc.nextInt();

            Arrays.sort(a);

            int num[]=new int[2];
            int count=0;

            for(int i=n-1;i>0 && count!=2;i--)
            {
                if(a[i]==a[i-1])
                {
                    num[count]=a[i];
                    count++;
                    i--;
                }
            }

            if(count==2)
            {
                System.out.println(num[0]*num[1]);
            }
            else
            {
                System.out.println(-1);
            }   
        }
        sc.close();
    }
}