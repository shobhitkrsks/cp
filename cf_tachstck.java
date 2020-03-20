import java.util.*;

public class cf_tachstck
{
    public static void main(String[] args)
    {
        Scanner in=new Scanner(System.in);
        int n=in.nextInt();
        int d=in.nextInt();

        int ar[]=new int[n];

        for(int i=0;i<n;i++)
        {
            ar[i]=in.nextInt();
        }

        Arrays.sort(ar);
        int count=0;
        for(int i=0;i<n-1;i++)
        {
            if(ar[i+1]-ar[i]<=d)
                {
                    count++;
                    i++;
                }
        }
        System.out.print(count);

        in.close();
    }
}
