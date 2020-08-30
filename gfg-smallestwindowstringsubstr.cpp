#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
 {
	int tc;
	cin>>tc;
    cin.ignore();
	while(tc--)
	{
	    string txt,pat;
	    getline(cin,txt);
        getline(cin,pat);
	    
	    int ltxt=txt.length();
	    int lpat=pat.length();
	    
	    int frpat[256],octxt[256];
	    memset(frpat,0,sizeof(frpat));
	    memset(octxt,0,sizeof(octxt));
	    
	    for(int i=0;i<lpat;i++)
	        frpat[pat[i]]++;
	        
        int count=0,start=0;
        int minl=1000,minstartidx=-1;
        for(int i=0;i<ltxt;i++)
        {
            if(frpat[txt[i]]>0)
            {
                octxt[txt[i]]++;
                if(octxt[txt[i]]<=frpat[txt[i]])
                {
                    count++;
                }
            }
            
            if(count==lpat)
            {
                while(frpat[txt[start]]==0 || octxt[txt[start]]>frpat[txt[start]])
                {
                    if(octxt[txt[start]]>frpat[txt[start]])
                    {
                        octxt[txt[start]]--;
                    }
                    start++;
                }
                
                if(i-start+1<minl)
                {
                    minstartidx=start;
                    minl=i-start+1;
                }
                
            }
        }
        
        if(minstartidx==-1)
            cout<<"-1\n";
        else
        {
            for(int i=minstartidx;i<minstartidx+minl;i++)
                cout<<txt[i];
            cout<<"\n";
        }
	}
	
	return 0;
}