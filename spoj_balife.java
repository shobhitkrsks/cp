import java.util.Scanner;

public class spoj_balife
{
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);

        int n=0;
        while(n!=-1)
        {
            n=sc.nextInt();
            if(n==-1)
                break;

            sc.nextLine();
            int sum=0;
            int ar[]=new int[n];
            for(int i=0;i<n;i++)
            {
                ar[i]=sc.nextInt();
                sum+=ar[i];
            }

            if(sum%n!=0)
                System.out.println(-1);
            else
            {
                int avg=sum/n;
                int diff[]=new int[n];
                diff[0]=ar[0]-avg;
                int max=Math.abs(diff[0]);
                int temp;
                for(int i=1;i<n;i++)
                {
                    temp=ar[i]-avg;
                    diff[i]=temp+diff[i-1];
                    if(Math.abs(diff[i])>max)
                        max=Math.abs(diff[i]);
                }
                System.out.println(max);
                sc.nextLine();
                sc.nextLine();

            }
        }
        sc.close();
    }
}