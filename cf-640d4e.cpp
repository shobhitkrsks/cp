#include<iostream>
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int ar[8005];
int freq[8005];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int tc;
    cin>>tc;
    int n,sum,tsum=0;
    while(tc--)
    {
        memset(freq,0,sizeof(freq));
        cin>>n;
        for(int i=0;i<n;i++)
        {
            cin>>ar[i];
            freq[ar[i]]++;
            tsum+=ar[i];
        }

        if(tsum<=n)
            cout<<"0\n";
        else
        {
            int count = 0;
            int lbp = 0;
            for (int i = 1; i < n; i++)
            {
                if (ar[i] == n)
                {
                    i++;
                    continue;
                    lbp = i;
                }

                sum = ar[i];
                for (int j = i - 1; j >= lbp; j--)
                {
                    sum += ar[j];
                    if (sum > n)
                        break;

                    count+=freq[sum];
                    freq[sum]=0;
                }
            }

            cout << count << "\n";
        }
    }

    return 0;
}