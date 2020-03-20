import java.util.*;

public class cf_cielrcpt
{
    public static void main(String[] args)
    {
        Scanner cin=new Scanner(System.in);

        int t=cin.nextInt();
        while(t--!=0)
        {
            int n=cin.nextInt();
            int count=0;

            if(n>2048)
            {
                count=n/2048;
                n=n%2048;
            }

            while(n!=0)
            {
                count++;
                n=n&(n-1);
            }
            System.out.println(count);
        }
        cin.close();
        
    }
}