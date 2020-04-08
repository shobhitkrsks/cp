import java.util.*;
public class cc_attnd {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int tc=sc.nextInt();
        while(tc-->0)
        {
            int n=sc.nextInt();
            String names[][]=new String[n][2];
            for(int i=0;i<n;i++)
            {
                names[i][0]=sc.next();
                names[i][1]=sc.next();
            }

            for(int i=0;i<n;i++)
            {
                int count=0;
                for(int j=0;j<n;j++)
                {
                    if(names[i][0].equals(names[j][0]))
                        count++;
                }
                if(count>1)
                    System.out.println(names[i][0]+" "+names[i][1]);
                else if(count==1)
                    System.out.println(names[i][0]);
            }
        }
        sc.close();
    }
}