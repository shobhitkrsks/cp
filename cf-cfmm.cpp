#include <iostream>
#include<cstring>
using namespace std;

int main() 
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int n;
        cin>>n;
        int ar[26];
        memset(ar,0,sizeof(ar));
        string s;
        int l;
        for(int i=0;i<n;i++)
        {
            cin>>s;
            l=s.length();
            for(int j=0;j<l;j++)
                ar[s[j]-'a']++;
        }
        
        ar['c'-'a']/=2;
        ar['e'-'a']/=2;
        
        int mini=10000;
        mini=min(mini,ar['c'-'a']);
        mini=min(mini,ar['o'-'a']);
        mini=min(mini,ar['d'-'a']);
        mini=min(mini,ar['e'-'a']);
        mini=min(mini,ar['h'-'a']);
        mini=min(mini,ar['f'-'a']);
        
        cout<<mini<<endl;
    }
	return 0;
}
