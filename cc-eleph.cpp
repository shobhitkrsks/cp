#include <iostream>
using namespace std;

int main() 
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n;
        long int c,sum=0;
        cin>>n>>c;
        
        int ar[n];
        for(int j=0;j<n;j++)
        {
            cin>>ar[j];
            sum+=ar[j];
        }
        
        if(sum>c)
        cout<<"No\n";
        else
        cout<<"Yes\n";
        
        
    }
    
	return 0;
}
