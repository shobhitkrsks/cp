import java.util.Scanner;
import java.util.Stack;

public class cc_smpair
{
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
	    int t=sc.nextInt();
	    while(t-->0)
	    {
	        int n=sc.nextInt();
	        int ar[]=new int[n];
	        for(int i=0;i<n;i++)
	            ar[i]=sc.nextInt();
	            
            Stack<Integer> st=new Stack<>();
            for(int i=0;i<n;i++)
            {
                /* if(st.empty()||ar[i]>=st.peek())
                    st.push(ar[i]);
                else if(ar[i]<st.peek())
                {
                    if(st.size()>=2)
                    {
                        while(st.size()!=2)
                            st.pop();
                        
                        int a[]=new int[3];
                        a[0]=st.pop();
                        a[1]=st.pop();
                        a[2]=ar[i];
                        Arrays.sort(a);
                        st.push(a[0]);
                        st.push(a[1]);
                    }
                    else if(st.size()==1)
                    {
                        if(ar[i]>=st.peek())
                            st.push(ar[i]);
                        else
                        {
                            int temp=st.pop();
                            st.push(ar[i]);
                            st.push(temp);
                        }
                    }
                } */

                if(st.empty())
                {
                    st.push(ar[i]);                    
                }
                else if(st.size()==1)
                {
                    if(ar[i]>=st.peek())
                        st.push(ar[i]);
                    else
                    {
                        int temp=st.pop();
                        st.push(ar[i]);
                        st.push(temp);
                    }
                }
                else if(st.size()>=2)
                {
                    if(ar[i]>=st.peek());
                    else
                    {
                        st.pop();
                        if(ar[i]>=st.peek())
                            st.push(ar[i]);
                        else
                        {
                            int temp=st.pop();
                            st.push(ar[i]);
                            st.push(temp);
                        }
                    }

                }

            }

            int p=st.pop();
            int q=st.pop();
            System.out.println(p+q);
	    }
	    sc.close();
    }
}