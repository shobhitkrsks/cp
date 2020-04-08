#include <iostream>
#include <cstring>
#include <sstream>
#include<vector>
#include<bits/stdc++.h>

using namespace std;
int main()
{
    int tc;
    cin>>tc;
    string line;
    getline(cin,line);
    while(tc--)
    {
        vector<long> v;
        long value;
        getline(cin,line);
        istringstream iss(line);
        while (iss >> value)
            v.push_back(value);

        sort(v.begin(),v.end());
        long n=v.size();
        long l,sl;
        l=v.back();
        sl=v.at(n-2);
        //cout<<l<<" "<<sl<<endl;

        if(n-1==l)
            cout<<sl<<endl;
        else
            cout<<l<<endl;


    }

    return 0;
}