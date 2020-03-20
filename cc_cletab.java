import java.util.*;

public class cc_cletab
{
    public static void main(String[] args)
    {
        Scanner sc=new Scanner(System.in);
        int t=sc.nextInt();

        while(t--!=0)
        {
            int n=sc.nextInt();
            int m=sc.nextInt();
            int ar[]=new int[m];

            HashMap<Integer,Vector<Integer>> map=new HashMap<>();

            for(int i=0;i<m;i++)
            {
                ar[i]=sc.nextInt();
                if(map.containsKey(ar[i]))
                {
                    map.get(ar[i]).add(i);
                }
                else
                {
                    Vector<Integer> v=new Vector<>();
                    v.add(i);
                    map.put(ar[i], v);
                }
            }
            
            HashSet<Integer> frmbuf=new HashSet<>(n);
            int count=0;

            for(int i=0;i<m;i++)
            {
                if(frmbuf.contains(ar[i]))
                {
                    map.get(ar[i]).removeElementAt(0);
                }
                else
                {
                    if(frmbuf.size()<n)
                    {
                        frmbuf.add(ar[i]);
                        map.get(ar[i]).removeElementAt(0);
                        count++;
                    }
                    else
                    {
                        int maxindex=-1,frmnum=-1;
                        Iterator<Integer> itr=frmbuf.iterator();
                        boolean empty=false;
                        while(itr.hasNext())
                        {
                            Vector<Integer> tempv=new Vector<>();
                            int tempe=itr.next();
                            tempv=map.get(tempe);
                            if(tempv.isEmpty())
                            {
                                frmnum=tempe;
                                empty=true;
                                break;
                            }
                            else
                            {
                                if(tempv.firstElement()>maxindex)
                                {
                                    maxindex=tempv.firstElement();
                                    frmnum=tempe;
                                }       
                            }
                        }

                        frmbuf.remove((Integer)frmnum);
                        frmbuf.add(ar[i]);
                        count++;
                        
                        //if(!empty)
                        //{
                            //map.get(frmnum).removeElementAt(0);
                            map.get(ar[i]).removeElementAt(0);

                        //}
                    }
                }
            }

            System.out.println(count);
        }
        sc.close();
    }
}