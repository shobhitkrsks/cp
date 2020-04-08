import java.util.Scanner;

public class cc_chefstud 
{
    public static void main(String[] args) 
    {
        Scanner sc=new Scanner(System.in);
        int tc=sc.nextInt();
        sc.nextLine();
        while(tc-->0)
        {
            String s=sc.nextLine();
            int l=s.length();
            int count=0;
            for(int i=0;i<l-1;i++)
            {
                if(s.charAt(i)=='<' && s.charAt(i+1)=='>')
                    count++;
            }
            System.out.println(count);
        }   
        sc.close();     
    }
}