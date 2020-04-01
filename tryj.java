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
            String p=sc.next();
            String q=sc.next();
            System.out.println(p+" "+q);
            
        }
        sc.close();
    }
} 
//01234
//012345