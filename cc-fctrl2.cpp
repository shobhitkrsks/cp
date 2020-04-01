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
        int k=n;
        
        int ar[200];
        int m=0;
        while(k!=0)
        {
            ar[m++]=k%10;
            k/=10;
        }

        for(int i=2;i<n;i++)
        {
            int carry=0;
            for(int j=0;j<m;j++)
            {
                int temp=ar[j]*i+carry;
                ar[j]=temp%10;
                carry=temp/10;
            }
            while(carry!=0)
            {
                ar[m++]=carry%10;
                carry/=10;
            }
        }

        for(int i=m-1;i>=0;i--)
            cout<<ar[i];

        cout<<endl;
    }
	return 0;
}
