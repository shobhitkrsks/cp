#include<iostream>

using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		string s[n];
		int k[n];
		for(int i=0;i<n;i++)
		{
			cin>>s[i]>>k[i];
		}
		for(int i=0;i<n;i++)
			cout<<s[i]<<" "<<k[i]<<endl;
	}
	// return 0;
}
