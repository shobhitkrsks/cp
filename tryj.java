import java.util.Scanner;

public class tryj
{
    public static void main(String[] args) 
    {
        Scanner sc=new Scanner(System.in);
        int t=sc.nextInt();
        sc.nextLine();
	    while(t--!=0)
	    {
            int mod=1000000007;
            int s=  1000000009;
            System.out.println(s%mod);
        }
        sc.close();
    }
} 
//01234
//012345