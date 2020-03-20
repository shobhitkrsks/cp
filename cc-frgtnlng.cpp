#include <iostream>
#include <unordered_map>
#include <cstring>
using namespace std;

int main() 
{
    int t;
    cin>>t;
    
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        
        unordered_map<string,bool> exist;
        
        string word;
        for(int i=0;i<n;i++)
        {
        	cin>>word;
        	exist[word]=false;
		}
        
		for(int i=0;i<k;i++)
		{
			int l;
			cin>>l;
			
			string key;
			for(int j=0;j<l;j++)
			{
				cin>>key;
				if(exist.find(key)!=exist.end())
				{
					exist[key]=true;
				}
			}
		}
        
        unordered_map<string,bool>::iterator a;
        for(a=exist.begin();a!=exist.end();++a)
        {
            if(a->second)
            cout<<"YES ";
            else
            cout<<"NO ";
        }
        cout<<endl;
        
    }
    
	return 0;
}

