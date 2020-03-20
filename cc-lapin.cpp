//#include<iostream>
//#include<cstring>
//using namespace std;
//
//int main()
//{
//	int t;
//	cin>>t;
//	
//	while(t--)
//	{
//		string str;
//		cin>>str;
//		
//		int l=str.length();
//		
//		int al[26],ar[26];
//		memset(al,0,sizeof(al));
//		memset(ar,0,sizeof(ar));
//		
//		for(int i=0,j=l-1;i<(l/2)-1;i++,j--)
//		{
//			al[str[i]-'a']++;
//			ar[str[j]-'a']++;
//		}
//		
//		
//		
//		int flag=1;
//		
//		for(int i=0;i<26;i++)
//		{
//			if(al[i]!=al[i])
//			{
//				flag=0;
//				break;
//			}
//		}
//		
//		if(flag)
//		cout<<"YES\n";
//		else
//		cout<<"NO\n";
//	}
//}

#include <iostream>
#include<bits/stdc++.h>
#include<unordered_set>
#include<unordered_map>
#include<cstring>
using namespace std;

int main() 
{
    int t;
    cin>>t;
    
    while(t--)
    {
        string str;
        cin>>str;
        int l=str.length();
        
        unordered_set<string> leftset,rightset;
        unordered_map<string,int> mapleft,mapright;
        
        
        for(int i=0,j=l-1;i<=(l/2)-1;i++,j--)
        {
            string keyl;
            keyl=str[i];
            if(leftset.find(keyl)!=leftset.end())
            {
                mapleft[keyl]++;
            }
            else
            {
                leftset.insert(keyl);
                mapleft[keyl]=1;
            }
            
            string keyr;
            keyr=str[j];
            if(rightset.find(keyr)!=rightset.end())
            {
                mapright[keyr]++;
            }
            else
            {
                rightset.insert(keyr);
                mapright[keyr]=1;
            }
        }
            
        int flag=1;
        
        unordered_set<string>::iterator i;
        for(i=leftset.begin();i!=leftset.end();++i)
        {
            if(rightset.find(*i)==rightset.end())
            {
                flag=0;
                // break;
            }
            else
            {
                if(mapright[*i]!=mapleft[*i])
                {
                    flag=0;
                    // break;
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

