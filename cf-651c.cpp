#include<iostream>
#include<bits/stdc++.h>
#define ll long long
using namespace std;

bool isPrime(int n)
{
    if(n<2)
        return 0;
    else if(n==2 || n==3)
        return 1;
    else if(n%2==0 || n%3==0)
        return 0;

    for(int i=5;i*i<=n;i+=6)
    {
        if(n%i==0)
            return 0;
    }

    return 1;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int tc;
    cin>>tc;
    while(tc--)
    {
        int n;
        cin>>n;

        bool win=0;
        if(n==1);
        else if(n%2==1)
        {
            win=1;
        }
        else
        {
            if(n&(n-1))
            {
                if(n==2)
                    win=0;
                else
                    win=1;
            }
            else
            {
                if(n%4==0)
                    win=0;
                else
                {
                    if(isPrime(n/2))
                    {
                        win=1;
                    }
                    else
                    {
                        win=0;
                    }
                    
                }
                
            }
            
        }

        if(win==0)
            cout<<"FastestFinger\n";
        else
            cout<<"Ashishgup\n";
    }

    return 0;
}