import java.util.Scanner;

public class cc_strpalin
{
    public static void main(String[] args) 
    {
        Scanner sc=new Scanner(System.in);
        int tc=sc.nextInt();
        sc.nextLine();
        while(tc-->0)
        {
            String s1=sc.nextLine();
            String s2=sc.nextLine();
            int l1=s1.length();
            boolean flag=false;
            for(int i=0;i<l1;i++)
            {

                if(s2.contains(String.valueOf(s1.charAt(i))))
                {
                    flag=true;
                    break;
                }
            }    
            if(flag)
                System.out.println("Yes");
            else
                System.out.println("No");

        }        
        sc.close();
    }
}