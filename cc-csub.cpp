
#include <iostream>
using namespace std;

int main() 
{
    int t;
    cin>>t;
    
    while(t--)
    {
        int n;
        cin>>n;
        
        string input;
        cin>>input;
        
        int count=0;
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<=i;j++)
            {
                if(input[i]=='1' && input[j]=='1')
                    count++;
            }
        }
        cout<<count<<"\n";
    }
    
	return 0;
}
