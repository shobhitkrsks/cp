import java.util.Scanner;

public class stringpermutation
{
    public static void main(String[] args)
    {
        Scanner cin=new Scanner(System.in);
        String s=cin.nextLine();
        int l=s.length();
        permute(s,0,l-1);
        cin.close();
    }

    public static void permute(String s,int l,int r)
    {
        if(l==r)
        {
            System.out.println(s);
        }
        else
        {
            for(int i=l;i<=r;i++)
            {
                char[] temp=s.toCharArray();
                char t=temp[l];
                temp[l]=temp[i];
                temp[i]=t;
                s=String.valueOf(temp);
                
                permute(s, l+1, r);

                t=temp[l];
                temp[l]=temp[i];
                temp[i]=t;
                s=String.valueOf(temp);

            }
        }
    }

    
}