#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int n,s;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int tc;
    cin>>tc;
    while(tc--)
    {
        n=3;s=3;
        int ar[n][s];
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<s;j++)
            {
                cin>>ar[i][j];
            }
        }
        
        vector<int> v;
        for(int i=0;i<n;i++)
            v.push_back(i);
        
        bool flag=false;
        do
        {
            for(auto i:v)
                cout<<i<<" ";
            cout<<endl;
            bool flag1=true,flag2=false;
            for(int i=0;i<n-1;i++)
            {
                flag1=true,flag2=false;
                for(int j=0;j<s;j++)
                {
                    if(ar[v[i]][j]>ar[v[i+1]][j])
                    {
                        cout<<"i:"<<i<<" j:"<<j<<" break1\n";
                        flag1=false;
                        break;
                    }
                    if(ar[v[i]][j]<ar[v[i+1]][j])
                    {
                        cout<<"i:"<<i<<" j:"<<j<<" flag2\n";
                        flag2=true;
                    }
                }
                
                if((!flag1 || !flag2))
                {
                    cout<<"i:"<<i<<" break3\n";
                    break;
                }
            }
            if((!flag1 && flag2))
            {
                break;
            }
            if((flag1))
            {
                if(flag2)
                    flag=true;
                break;
            }
        } while(next_permutation(v.begin(),v.end()));
        
        if(flag)
            cout<<"yes\n";
        else
            cout<<"no\n";
            
        
    }
	return 0;
}
