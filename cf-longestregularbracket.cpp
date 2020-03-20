#include<iostream>
#include<stack>
#include<cstring>
using namespace std;

int main()
{
    string t;
    cin>>t;
    long int l=t.length();

    stack<char> s;
    long int c[l],d[l];
    long int maxlen=0,len=0,freq=0;

    for(long int i=0;i<l;i++)
    {
        if(t[i]=='(')
        {
            s.push(i);
        }
        else
        {
            if(!s.empty())
            {
                d[i]=s.top();
                c[i]=s.top();
               
                if(t[d[i]-1]==')')
                {
                    if(c[d[i]-1]!=-1)
                        c[i]=c[d[i]-1];    
                }

                if(i-c[i]+1>maxlen)
                {
                    maxlen=i-c[i]+1;
                    freq=1;
                }
                else if(i-c[i]+1==maxlen)
                {
                    freq++;
                }
                
                s.pop();
 
            }
            else
            {
                d[i]=-1;
                c[i]=-1;
            }
        }
        
    }

    if(maxlen==0 && freq==0)
        cout<<"0 1";
    else
    {
        cout<<maxlen<<" "<<freq;
    }
    
    


    return 0;
}

/* #include<iostream>
#include<stack>
#include<cstring>
using namespace std;

int main()
{
    string t;
    cin>>t;
    long int l=t.length();

    stack<long int> s;
    s.push(-1);
    long int maxlen=0,freq=0;

    for(long int i=0;i<l;i++)
    {
        if(t[i]=='(')
            s.push(i);
        else
        {
            s.pop();

            if(s.empty())
            {
                s.push(i);
            }
            else
            {
                int top=s.top();
                if(i-top==maxlen)
                {
                    freq++;
                }
                else if(i-top>maxlen)
                {
                    maxlen=i-top;
                    freq=1;
                }
            }
            
        }
        
    }
    if(maxlen==0)
    cout<<"0 1";
    else
    {
        cout<<maxlen<<" "<<freq;
    }

    return 0;
} */