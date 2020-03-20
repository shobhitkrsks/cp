#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;

struct valp
{
    int i,j,val;
};

// bool compfun(valp a1,valp a2)
// {
//     if(a1.val<a2.val)
//         return true;
//     else if(a1.val==a2.val)
//     {
//         if(a2.i>=a1.j)
//             return true;
//         else 
//             return false;
//     }
//     else
//     {
//         return false;
//     }
// }

int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int l=s.length();
        reverse(s.begin(),s.end());
        
        int dp[l][l];
        memset(dp,0,sizeof(dp));
        
        for(int i=0;i<l;i++)
        {
            dp[i][i]=s[i]-'0';
            for(int j=0;j<i;j++)
            {
                dp[j][i]=dp[j][i-1]+(dp[i][i]<<(i-j));
            }
        }
        
        // for(int i=0;i<l;i++)
        // {
        //     for(int j=0;j<l;j++)
        //         cout<<dp[i][j]<<"\t";
        //     cout<<endl;
        // } 
        
        int found=0;
        for(int i=0;i<l-2 && !found;i++)
        {
            int firstval=dp[0][i];

            for(int j=i+1;j<l-1 && !found;j++)
            {
                if(dp[i+1][j]==firstval && dp[j+1][l-1]==firstval)
                {
                    found=1;

                    int flag=0;
                    for(int p=i;p>=0;p--)
                    {
                        if(!flag)
                        {
                            if(s[p]=='1')
                            {
                                flag=1;
                                cout<<s[p];
                            }
                        }
                        else
                        {
                            cout<<s[p];
                        }
                        
                    }
                    cout<<endl;
                }
                
            }
        }
        if(!found)
        cout<<-1<<endl;
    }
    return 0;
}