#include<iostream>
#include<stack>
#include<cstring>
using namespace std;
#define buf 200000

int main()
{
    string c;
    cin>>c;

    int n=c.length();
    stack<char> s;

    for(int i=0;i<n;i++)
    {
        char sym=c[i];
        
        if(s.empty())
            s.push(c[i]);
        else
        {
            if(s.top()==c[i])
            {
                while(!s.empty() && s.top()==c[i])
                    s.pop();
            }
            else
            {
                s.push(c[i]);
            }
            
        }
        
    }

    if(!s.empty())
    cout<<"No";
    else
    {
        cout<<"Yes";
    }
    
    return 0;
    
}