import java.util.Collections;
import java.util.Comparator;
import java.util.HashMap;
import java.util.Iterator;
import java.util.LinkedHashMap;
import java.util.LinkedList;
import java.util.List;
import java.util.Map;
import java.util.Scanner;

public class cc_tadelive
{

    public static HashMap<Integer,Integer> sortmap(HashMap<Integer,Integer> hmap)
    {
        List<Map.Entry<Integer,Integer>> list=new LinkedList<Map.Entry<Integer,Integer>>(hmap.entrySet());

        Collections.sort(list,new Comparator<Map.Entry<Integer,Integer>>()
        {
            public int compare(Map.Entry<Integer,Integer> o1, Map.Entry<Integer,Integer> o2)
            {
                return o1.getValue().compareTo(o2.getValue());
            }
        });

        HashMap<Integer,Integer> temp=new LinkedHashMap<>();
        for(Map.Entry<Integer,Integer> e:list)
        {
            temp.put(e.getKey(),e.getValue());
        }

        return temp;
    }

    public static void main(String[] args)
    {
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        int x=sc.nextInt();
        int y=sc.nextInt();
        int t;
        
        HashMap<Integer,Integer> ma=new HashMap<>();
        HashMap<Integer,Integer> mb=new HashMap<>();

        for(int i=0;i<n;i++)
        {
            t=sc.nextInt();
            ma.put(i,t);
        }

        for(int i=0;i<n;i++)
        {
            t=sc.nextInt();
            mb.put(i,t);
        }

        ma=sortmap(ma);
        mb=sortmap(mb);

        for(Map.Entry<Integer,Integer> m:ma.entrySet())
        System.out.println(m.getKey()+"->"+m.getValue());

        for(Map.Entry<Integer,Integer> m:mb.entrySet())
        System.out.println(m.getKey()+"->"+m.getValue());



        sc.close();
    }
}