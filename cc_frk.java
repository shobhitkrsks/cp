import java.util.Scanner;

public class cc_frk {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int tc=sc.nextInt();
        sc.nextLine();
        int count=0;
        while(tc-->0)
        {
            String s=sc.nextLine();
            int l=s.length();
            boolean flag=false;
            for(int i=1;i<l && !flag;i++)
            {
                for(int j=i-1;j>=i-3 && j>=0 && !flag;j--)
                {
                    String t=s.substring(j, i+1);
                    if(i-j==1)
                    {
                        if(t.equals("ch") || t.equals("he") || t.equals("ef"))
                        {
                            flag=true;
                        }
                    }
                    else if(i-j==2)
                    {
                        if(t.equals("che") || t.equals("hef"))
                        {
                            flag=true;
                        }
                    }
                    else if(i-j==3)
                    {
                        if(t.equals("chef"))
                        {
                            flag=true;
                        }
                    }
                }
            }
            if(flag)
                count++;
        }
        System.out.println(count);
        sc.close();
    }
}
// 0 1 2 3 4 5 6