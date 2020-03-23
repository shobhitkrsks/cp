import java.util.Scanner;

public class cc_cakedoom
{
    public static boolean validfun(String s, int n) 
    {
        char c[]=s.toCharArray();
        boolean flag=true;
        for(int i=0;i<n-1;i++)
        {
            if(c[i]!='?' && c[i+1]!='?' && c[i]==c[i+1])
                flag=false;
        }
        if(c[n-1]!='?' && c[0]!='?' && c[0]==c[n-1])
            flag=false;

        return flag;
    }

    private static char lut(char prev,char next,int k)
    {
        char code='0';
        for(char cur='0'; cur <='2'; cur++)
        {
            if(prev!=cur && next!=cur) 
            {
                code = cur;
                break;
            }
        }
        return code;
    }

    public static void main(String[] args) 
    {
        Scanner sc=new Scanner(System.in);
        int t=sc.nextInt();

        while(t--!=0)
        {
            int k=sc.nextInt();
            sc.nextLine();
            String s=sc.nextLine();
            char c[]=s.toCharArray();
            int n=s.length();

            if(n==1)
            {
                if(c[0]=='?')
                    System.out.println("0");
                else if(c[0]-'0'<k)
                    System.out.println(c[0]);
                else
                    System.out.println("NO");
            }
            else if(k==1)
            {
                if(n==1 && (c[0]=='?' || c[0]=='0'))
                    System.out.println("0");
                else
                    System.out.println("NO");
            }
            else if(k==2)
            {
                //2 colors only allowed are 010101....01 || 101010...10
                if(n%2==1)
                System.out.println("NO");
                else
                {
                    boolean pos = true;
                    String temp=s;
                    for(int i=0; i<n;i++) 
                    {
                        if(c[i]=='?')
                        {
                            if(i%2==0)
                                c[i]='0';
                            else if(i%2==1)
                                c[i]='1';
                        }
                        else if(c[i]!=('0'+i%2)) 
                        {
                            pos = false;
                            break;
                        }
                    }
                    if(pos)
                        System.out.println(c.toString());
                    else
                    {
                        pos = true;
                        s=temp;
                        c=s.toCharArray();
                        for(int i=0; i<n;i++) 
                        {
                            if(c[i]=='?')
                                c[i] = (char)(int)('0'+1-i%2);
                            else if(c[i]!=('0'+1-i%2)) 
                            {
                                pos = false;
                                break;
                            }
                        }
                        if(pos)
                            System.out.println(c.toString());
                        else
                            System.out.println("NO");
                        
                    }
                }
                    
            
            }
            else if(k>=3)
            {
                boolean isvalid=validfun(s,n);
                if(!isvalid)
                    System.out.println("NO");
                else if(isvalid)
                {
                    if(c[0]=='?')
                    {
                        c[0]=lut(c[n-1],c[1],k);
                        System.out.print(c[0]);
                    }
                    else
                        System.out.print(c[0]);
                    for(int j=1;j<n-1;j++)
                    {
                        if(c[j]=='?')
                        {
                            c[j]=lut(c[(j-1)%n],c[(j+1)%n],k);
                            System.out.print(c[j]);
                        }
                        else
                        {
                            System.out.print(c[j]);
                        }
                    }
                    if(c[n-1]=='?')
                    {
                        c[n-1]=lut(c[0],c[n-2],k);
                        System.out.print(c[n-1]);
                    }
                    else
                        System.out.print(c[n-1]);

                    System.out.println();
                }
            }
        }
        sc.close();
    }
}