#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n, s;
        cin >> n;

        int ar[n];
        for (int i = 0; i < n; i++)
        {
            cin >> ar[i];
            s += ar[i];
        }

        if (s % 2 == 1)
            cout << "NO\n";
        else
        {
            s /= 2;
            bool dp[n + 1][s + 1];

            for (int i = 0; i <= n; i++)
            {
                dp[i][0] = 1;
            }

            for (int i = 1; i <= s; i++)
            {
                dp[0][i] = 0;
            }

            for (int i = 1; i <= n; i++)
            {
                for (int j = 1; j <= s; j++)
                {
                    if (ar[i - 1] > j)
                    {
                        dp[i][j] = dp[i - 1][j];
                    }
                    else
                    {
                        dp[i][j] = dp[i - 1][j] || dp[i - 1][j - ar[i - 1]];
                    }
                }
            }

            /* for (int i = 0; i <= n; i++)
            {
                for (int j = 0; j <= s; j++)
                {
                    cout << dp[i][j] << " ";
                }
                cout << endl;
            } */

            if(dp[n][s]==1)
                cout<<"YES\n";
            else
                cout<<"NO\n";
        }
    }

    return 0;
}