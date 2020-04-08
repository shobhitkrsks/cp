import java.util.Scanner;

public class cc_prgift 
{
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
	    int tc=sc.nextInt();
	    while(tc-->0)
	    {
	        int n=sc.nextInt();
            int k=sc.nextInt();
            int count=0;
            System.out.println("Initially, n:"+n+" k:"+k+" count:"+count);
            int t;
            //int start=0,end=0;
	        for(int i=0;i<n;i++)
	        {
	            t=sc.nextInt();
                if(t%2==0)
                {
                    t=sc.nextInt();
                    if(t%2==0)
                        count++;
                    /*
                    if(count>0 && count<k)
                    {
                        count++;
                    }
                    else if(count>k)
                    {
                        count++;
                    }
                    else if(count==0)
                    {
                        count++;
                        start=i;
                    }
                    else if(count==k)
                    {
                        count++;
                        end=i;
                    }
                    */
                }
                
	        }
	        if(k==0 && count<n)
                System.out.println("YES");
            else if(k==0 && count>=n)
                System.out.println("NO");
            else if(count>=k)
                System.out.println("YES");
            else
                System.out.println("NO");
	    }
	    sc.close();
    }

}