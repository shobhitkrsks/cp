import java.util.Scanner;

public class cc_nokia
{
    public static void main(String args[])
    {
        int table[][]=new int[31][2];
        table[0][0]=0;table[0][1]=0;
        table[1][0]=2;table[1][1]=2;

        for(int i=2;i<31;i++)
        {
            table[i][0]=table[(i/2)][0]+table[(i-1)/2][0]+i+1;
            table[i][1]=table[i-1][1]+i+1;

            // System.out.println(table[i][0]+" "+table[i][1]);
        }

        int t;
        Scanner in=new Scanner(System.in);
        t=in.nextInt();

        for(int i=0;i<t;i++)
        {
            int n,m;
            n=in.nextInt();
            m=in.nextInt();

            if(m<table[n][0])
                System.out.println(-1);
            else if(m>=table[n][0] && m<=table[n][1])
                System.out.println(0);
            else if(m>table[n][1])
                System.out.println(m-table[n][1]);
        }
        
        in.close();
    }
}