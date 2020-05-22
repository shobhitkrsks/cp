import java.util.Scanner;

public class cc_co92judg {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int tc=sc.nextInt();
        while(tc-->0)
        {
            int n=sc.nextInt();
            int t,alice,bob;
            int max=0,sum=0;
            for(int i=0;i<n;i++)
            {
                t=sc.nextInt();
                if(t>max)
                    max=t;
                sum+=t;
            }
            sum-=max;
            alice=sum;

            max=0;sum=0;
            for(int i=0;i<n;i++)
            {
                t=sc.nextInt();
                if(t>max)
                    max=t;
                sum+=t;
            }
            sum-=max;
            bob=sum;

            if(alice==bob)
                System.out.println("Draw");
            else if(alice>bob)
                System.out.println("Bob");
            else if(alice<bob)
                System.out.println("Alice");
        }
        sc.close();
    }
}