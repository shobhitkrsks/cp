#include<bits/stdc++.h>
using namespace std;

int main()
{
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);
    // cout.tie(NULL);

    int tc;
    cin>>tc;
    while(tc--)
    {
        int n;
        cin>>n;
        string s;
        bool ar[256];
        memset(ar,0,sizeof(ar));
        cin>>s;

        char curtask=s[0];
        ar[s[0]]=1;
        bool flag=true;
        for(int i=1;i<n && flag;i++)
        {
            if(s[i]!=curtask)
            {
                if(ar[s[i]]==1)
                {
                    flag=false;
                }
                else
                {
                    ar[s[i]]=1;
                    curtask=s[i];
                }
            }
        }

        if(flag)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }

    return 0;
}