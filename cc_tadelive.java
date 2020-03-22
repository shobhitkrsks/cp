import java.lang.Math;
import java.util.*;

public class cc_tadelive
{
	public static void main (String[] args) throws java.lang.Exception
	{
	    Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        int x=sc.nextInt();
        int y=sc.nextInt();
        int t;
        
        HashMap<Integer,Integer> ma=new HashMap<>();
        HashMap<Integer,Integer> mb=new HashMap<>();
        HashMap<Integer,Integer> diff=new HashMap<>();


        for(int i=0;i<n;i++)
        {
            t=sc.nextInt();
            ma.put(i,t);
        }

        for(int i=0;i<n;i++)
        {
            t=sc.nextInt();
            mb.put(i,t);
            diff.put(i, Math.abs(ma.get(i)-t));
        }

        diff=sortrevmap(diff);

        //for(Map.Entry<Integer,Integer> m:diff.entrySet())
        //System.out.println(m.getKey()+"->"+m.getValue());

        long sum=0;
        int a=0,b=0;
        for(Map.Entry<Integer,Integer> m:diff.entrySet())
        {
            if(ma.get(m.getKey())>=mb.get(m.getKey()))                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                     
            {
                if(a<x)
                {
                    sum+=ma.get(m.getKey());
                    a++;
                }
                else
                {
                    sum+=mb.get(m.getKey());
                    b++;
                }
            }
            else
            {
                if(b<y)
                {
                    sum+=mb.get(m.getKey());
                    b++;
                }
                else
                {
                    sum+=ma.get(m.getKey());
                    a++;
                }
            }
        }
        System.out.println(sum);
        sc.close();
	}
	
	public static HashMap<Integer,Integer> sortrevmap(HashMap<Integer,Integer> hmap)
    {
        List<Map.Entry<Integer,Integer>> list=new LinkedList<Map.Entry<Integer,Integer>>(hmap.entrySet());

        Collections.sort(list,new Comparator<Map.Entry<Integer,Integer>>()
        {
            public int compare(Map.Entry<Integer,Integer> o1, Map.Entry<Integer,Integer> o2)
            {
                return o1.getValue().compareTo(o2.getValue());
            }
        });

        Collections.reverse(list);

        HashMap<Integer,Integer> temp=new LinkedHashMap<>();
        for(Map.Entry<Integer,Integer> e:list)
        {
            temp.put(e.getKey(),e.getValue());
        }

        return temp;
    }
}
