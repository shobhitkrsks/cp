import java.util.Scanner;

public class cc_cakedoom
{
    public static int isvalid(String s,int n)
    {
        int code=0;
        char c[]=s.toCharArray();

        boolean flag1=false,flag2=false;
        for(int i=0;i<n-1;i++)
        {
            if(c[i]=='?')
                flag1=true;
            if(c[i]!='?' && c[i+1]!='?' && c[i]==c[i+1])
            {
                flag2=true;
            }           
        }

        if(c[0]!='?' && c[n-1]!='?' && c[0]==c[n-1])
            flag2=true;


        if(!flag1 && !flag2) //string complete but not adjacent same
            return 0;
        else if(!flag2 && flag2) //string complete and adjacent same
            return 1;
        else if(flag1 && !flag1) //string not complete and adjacent not same
            return 2;
        else if(flag1 && flag2) //string not complete but adjacent same
            return 3;
    }

    public static void main(String[] args) 
    {
        Scanner sc=new Scanner(System.in);
        int t=sc.nextInt();

        while(t--!=0)
        {
            int n=sc.nextInt();
            String s=sc.nextLine();

            int flag=isvalid(s,n);
        }

        sc.close();

    }
}