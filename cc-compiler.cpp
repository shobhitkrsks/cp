#include<iostream>
#include<stack>
#include<cstring>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        string c;

        cin>>c;
        int l=c.length();

        stack<char> s;
        int p=0;
        int maxp=0;
        for(long int i=0;i<l;i++)
        {
            /* if(!s.empty())
            {
                if(c[i]=='<')
                    s.push(c[i]);
                else
                {
                    s.pop();
                    p+=2;
                }
            }
            else
            {
                maxp=max(p,maxp);
                if(c[i]=='<')
                {
                    s.push(c[i]);
                }
                else
                {
                    break;
                }
            } */

            if(c[i]=='<')
            {
                s.push('<');
            }
            else
            {
                if(!s.empty())
                {
                    s.pop();
                    p+=2;
                    if(s.empty())
                    {
                        maxp=max(maxp,p);
                    } 
                }
                else
                {
                    break;
                }
            }
        }
        cout<<maxp<<endl;
    }
    return 0;
}

