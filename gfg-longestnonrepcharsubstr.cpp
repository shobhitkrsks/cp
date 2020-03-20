#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int l=s.length();

        int visited[26];
        for(int i=0;i<26;i++)
            visited[i]=-1;
        
        int curlen=0,maxlen=0,starti=0;

        for(int i=0;i<l;i++)
        {
            if(visited[s[i]-'a']==-1 || starti>visited[s[i]-'a'])
            {
                curlen++;
            }
            else
            {
                maxlen=max(maxlen,curlen);
                curlen=i-visited[s[i]-'a'];
                starti=visited[s[i]-'a']+1;
            }

            visited[s[i]-'a']=i;
            
        }
        maxlen=max(maxlen,curlen);
        cout<<maxlen<<endl;
    }
}