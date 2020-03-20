#include<iostream>
#include<stack>
using namespace std;
typedef long long ll;

int main()
{
	ll n;

	do
	{
		cin>>n;

		if(n==0)
			break;
		else
		{
			ll h[n];
			for(int i=0;i<n;i++)
				cin>>h[i];

			stack<ll> s;
			int i=0;

			ll maxarea=-1;
			while(i<n)
			{
				if(s.empty() || h[i]>=h[s.top()])
				{
					s.push(i);
					i++;
				}
				else
				{
					int temp=s.top();
					s.pop();

					ll area=h[temp] * (s.empty()?i:i-s.top()-1);

					if(area>maxarea)
						maxarea=area;
				}

			}

			while(!s.empty())
			{
				int temp=s.top();
				s.pop();

				ll area=h[temp] * (s.empty()?i:i-s.top()-1);

				if(area>maxarea)
					maxarea=area;
			}

			cout<<maxarea<<endl;

		}
	} while(n!=0);

	return 0;
}