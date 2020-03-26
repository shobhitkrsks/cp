import java.util.Arrays;
import java.util.HashMap;
import java.util.Map;
import java.util.Scanner;
import java.util.TreeMap;

public class spoj_gcj101bb
{
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        int tc=sc.nextInt();
        while(tc--!=0)
        {
            int n=sc.nextInt();
            int k=sc.nextInt();
            int b=sc.nextInt();
            int t=sc.nextInt();
            int x[]=new int[n];
            int v[]=new int[n];

            for(int i=0;i<n;i++)
                x[i]=sc.nextInt();

            for(int i=0;i<n;i++)
                v[i]=sc.nextInt();

            HashMap<Integer,Float> reachtime=new HashMap<>();

            int nfinishers=0;
            boolean finisher[]=new boolean[n];
            float time=0;
            for(int i=0;i<n;i++)
            {
                time=(float)(b-x[i])/(float)v[i];
                if(time<=t)
                {
                    reachtime.put(i,time);
                    finisher[i]=true;
                    nfinishers++;
                }
                else
                {
                    reachtime.put(i,(float)-1);
                    finisher[i]=false;
                }
            }

            if(nfinishers>=k)
            {
                int swap[]=new int[n];
                Arrays.fill(swap, 0);
                for(Map.Entry<Integer,Float> p:reachtime.entrySet())
                {
                    if(finisher[p.getKey()])
                    {
                        for(Map.Entry<Integer,Float> q:reachtime.entrySet())
                        {
                            if(x[p.getKey()]<x[q.getKey()] && q.getValue()==-1)
                                swap[p.getKey()]++;
                            else if(x[p.getKey()]<x[q.getKey()] && p.getValue()<q.getValue())
                                swap[p.getKey()]++;
                        }
                    }
                    
                }
                System.out.println(swap);
            }
            else
                System.out.println("IMPOSSIBLE");
        }
        sc.close();
    }
}