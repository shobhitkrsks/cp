#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int tc;
    cin>>tc;
    while(tc--)
    {
        int t;
        cin>>t;
        if(t==0 || t==1)
        {
            cout<<"0\n";
        }
        else
        {
            int count=0;
            while (t!=0 && t!=1)
            {
                double root = (sqrt(1 + 24 * (ll)t) - 1) / 6;
                int h = (int)(root);
                int n=h*(h+1)+(h*(h-1))/2;
                // cout<<t<<" "<<root<<" "<<h<<" "<<n<<endl;
                t -= n;
                count++;
            }
            cout << count << "\n";
        }
        
        
    }

    return 0;
}