import java.util.*;

public class cc_comm3
{
    static class coordinate
    {
        int x,y;
    }

    static double dist(coordinate a,coordinate b)
    {
        int p=a.x-b.x;
        int q=a.y-b.y;
        return Math.sqrt(p*p + q*q);
    }
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
	    int t=sc.nextInt();
	    while(t-->0)
	    {
            int r=sc.nextInt();
	        coordinate chef=new coordinate();
	        coordinate head=new coordinate();
	        coordinate sous=new coordinate();
	        
            chef.x=sc.nextInt();chef.y=sc.nextInt();
            head.x=sc.nextInt();head.y=sc.nextInt();
            sous.x=sc.nextInt();sous.y=sc.nextInt();

            double ch,cs,hs;
            ch=dist(chef,head);
            cs=dist(chef,sous);
            hs=dist(head,sous);

            int count=0;
            if(ch<=r)
                count++;
            if(cs<=r)
                count++;
            if(hs<=r)
                count++;
            
            if(count>=2)
                System.out.println("YES");
            else
                System.out.println("NO");
	    }
	    sc.close();
    }
}