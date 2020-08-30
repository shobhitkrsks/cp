#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int solve(int l, int x, int y, int z)
{
    if(l<=0 || l<min(x,min(y,z)))
        return 0;
    else return max(1+solve(l-x,x,y,z),max(1+solve(l-y,x,y,z),1+solve(l-z,x,y,z)));
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int tc;
    cin >> tc;
    while (tc--)
    {
        int l;
        cin >> l;
        int x, y, z;
        cin >> x >> y >> z;

        cout << solve(l, x, y, z) << endl;
    }

    return 0;
}