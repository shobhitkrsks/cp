import java.util.Scanner;

public class cc_omwg {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int tc=sc.nextInt();
        while(tc-->0)
        {
            int r=sc.nextInt();
            int c=sc.nextInt();

            boolean marked[][]=new boolean[r][c];
            for(int i=0;i<r;i++)
            {
                for(int j=0;j<c;j++)
                {
                    if((i+j)%2==0)
                        marked[i][j]=true;
                }
            }
            int count=0;
            for(int i=0;i<r;i++)
            {
                for(int j=0;j<c;j++)
                {
                    if(!marked[i][j])
                    {
                        try 
                        {
                            if(marked[i][j-1])
                                count++;
                        } catch (Exception e) {}
                        try 
                        {
                            if(marked[i][j+1])
                                count++;
                        } catch (Exception e) {}
                        try 
                        {
                            if(marked[i-1][j])
                                count++;
                        } catch (Exception e) {} 
                        try {
                            if(marked[i+1][j])
                                count++;
                        } catch (Exception e) {}
                    }
                }
            }
            System.out.println(count);
        }
        sc.close();
    }
}