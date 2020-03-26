import java.util.ArrayList;
import java.util.Collections;
import java.util.Iterator;
import java.util.Scanner;

public class cc_fgfs
{
    static class pair implements Comparable<pair>
    {
        private int a,d;

        public pair(int arr,int dep)
        {
            this.a=arr;
            this.d=dep;
        }

        public int geta()
        {
            return a;
        }

        public int getd()
        {
            return d;
        }

        @Override
        public int compareTo(pair p) {
            return this.geta()-p.geta();
        }
    }
    
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        int t=sc.nextInt();
        while(t--!=0)
        {
            int n=sc.nextInt();
            int k=sc.nextInt();

            ArrayList<pair>[] cus=new ArrayList[k];
            for(int i=0;i<k;i++)
            {
                cus[i]=new ArrayList<pair>();
            }
            for(int i=0;i<n;i++)
            {
                int arr=sc.nextInt();
                int dep=sc.nextInt();
                int pref=sc.nextInt();

                pair temp=new pair(arr, dep);
                cus[pref-1].add(temp);
                
            }

            int count=0;
            for(int i=0;i<k;i++)
            {
                ArrayList<pair> cusi=new ArrayList<>(cus[i]);
                Collections.sort(cusi);

                int arr=0,dep=0;
                Iterator<pair> itr=cusi.iterator();
                if(itr.hasNext())
                {
                    pair p=itr.next();
                    arr=p.geta();
                    dep=p.getd();
                    count++;
                }

                while(itr.hasNext())
                {
                    pair p=itr.next();
                    if(p.geta()>=arr && p.geta()<dep && p.getd()<=dep)
                    {
                        arr=p.geta();
                        dep=p.getd();
                    }
                    else if(p.geta()>=dep)
                    {
                        arr=p.geta();
                        dep=p.getd();
                        count++;
                    }
                }
            }
            System.out.println(count);
        }
        sc.close();
    }
}