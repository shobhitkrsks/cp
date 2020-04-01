import java.util.Scanner;
import java.util.Stack;

public class cc_onp
{
    static int prec(char c)
    {
        if(c=='^')
            return 3;
        else if(c=='*' || c=='/')
            return 2;
        else if(c=='-' || c=='+')
            return 1;
        else return -1;
    }
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        int t=sc.nextInt();
        while(t-->0)
        {
            String str=sc.next();
            char c[]=str.toCharArray();
            int l=str.length();
            Stack<Character> s=new Stack<>();
            for(int i=0;i<l;i++)
            {
            
                if(c[i]>='a' && c[i]<='z')
                    System.out.print(c[i]);
                else if(c[i]=='(')
                    s.push(c[i]);
                else if(c[i]=='+' || c[i]=='-' || c[i]=='*' || c[i]=='/' || c[i]=='^')
                {
                    while(!s.empty() && prec(c[i])<=prec(s.peek()))
                    {
                        System.out.print(s.pop());
                    }
                    s.push(c[i]);
                }
                else if(c[i]==')')
                {
                    while(!s.empty() && s.peek()!='(')
                    {
                        System.out.print(s.pop());
                    }
                    if(!s.empty() && s.peek()=='(')
                        s.pop();
                }
            }
            while(!s.empty())
                System.out.print(s.pop());
            System.out.println();
        }
        sc.close();
    }
}