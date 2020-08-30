import java.util.Arrays;
import java.util.Scanner;

class closingvalue
{
    public static boolean isPrime(int n)
    {
        // Corner cases 
        if (n <= 1)  return false; 
        if (n <= 3)  return true; 
    
        // This is checked so that we can skip  
        // middle five numbers in below loop 
        if (n%2 == 0 || n%3 == 0) return false; 
    
        for (int i=5; i*i<=n; i=i+6) 
            if (n%i == 0 || n%(i+2) == 0) 
                return false;

        return true;
    }

    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);

        Boolean ar[] = new Boolean[510];
        Arrays.fill(ar, Boolean.FALSE);
        
        for(int i=1;i<510;i++)
        {
            ar[i] = isPrime(i);
        }

        int d,p;
        d=sc.nextInt();
        p=sc.nextInt();

        int hoursperpart=d/p;
        int count=0;

        for(int i=2;i<hoursperpart;i++)
        {
            if(isPrime(i))
            {
                boolean flag = true;
                for(int j=1;j<=p-1 && flag;j++)
                {
                    if(!isPrime(j*hoursperpart+i))
                        flag=false;
                }

                if(flag)
                    count++;
            }
        }

        System.out.println(count);

        sc.close();
    }
}