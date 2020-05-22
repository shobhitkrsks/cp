#include <iostream>
#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() 
{
    
    int tc;
    cin>>tc;
    string eol;
    getline(cin,eol);

    while(tc--)
    {
        string name;
        getline(cin,name);
        vector<string>part;

        int l=name.length();
        string temp="";
        for(int i=0;i<l;i++)
        {
            if(name[i]==' ')
            {
                part.push_back(temp);
                temp="";
            }
            else
                temp+=name[i];
        }
        part.push_back(temp);

        int n=part.size();
        for(int i=0;i<n-1;i++)
        {
            cout<<char(toupper(part[i][0]))<<". ";
        }
        l=part[n-1].length();
        cout<<char(toupper(part[n-1][0]));
        for(int i=1;i<l;i++)
            cout<<char(tolower(part[n-1][i]));

        cout<<"\n";
    }
	return 0;
}
