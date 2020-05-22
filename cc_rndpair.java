import java.util.Arrays;
import java.util.Scanner;

public class cc_rndpair {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int tc=sc.nextInt();
        while(tc-->0)
        {
            int n=sc.nextInt();
            int ar[]=new int[n];
            for(int i=0;i<n;i++)
            {
                ar[i]=sc.nextInt();
            }
            Arrays.sort(ar);
            int nr=0;
            int dr=(n*(n-1))/2;
            if(ar[n-1]==ar[n-2])
            {
                int j=n-1;
                int t=ar[n-1];
                while(j>=0)
                {
                    if(ar[j]!=t)
                        break;
                    
                    j--;
                }
                int count=n-1-j;
                nr=(count*(count-1))/2;
            }
            else
            {
                int j=n-2;
                int t=ar[n-2];
                while(j>=0)
                {
                    if(ar[j]!=t)
                        break;

                    j--;
                }
                nr=n-2-j;

            }
            double result=(double)nr/(double)dr;
            System.out.println(nr+" "+dr+" "+result);
        }
        sc.close();
    }
}