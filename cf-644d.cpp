#include<iostream>
#include<bits/stdc++.h>
#define ll long long
using namespace std;

bool isPrime(int n) 
{ 
    // Corner cases 
    if (n <= 1)  return false; 
    if (n <= 3)  return true; 
  
    // This is checked so that we can skip  
    // middle five numbers in below loop 
    if (n%2 == 0 || n%3 == 0) return false; 
  
    for (int i=5; i*i<=n; i=i+6) 
        if (n%i == 0 || n%(i+2) == 0) 
           return false; 
  
    return true; 
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
        int n,k;
        cin>>n>>k;
        // cout<<"Case "<<tc+1<<" ";
        if(k>=n)
            cout<<"1\n";
        else
        {
            if(isPrime(n))
                cout<<n<<"\n";
            else
            {
                /* if(k>sqrt(n))
                    k=sqrt(n); */
                
                int count=INT_MAX;
                for(int i=1;i<=k && i*i<=n;i++)
                {
                    if(n%i==0)
                    {
                                    // If divisors are equal, print only one 
                        if(n/i<count)
                            count=n/i;

                        if(n/i<=k && i<count)
                            count=i;
                    }
                }

                cout<<count<<"\n";
            }
            
        }
    }

    return 0;
}