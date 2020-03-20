#include<iostream>
#include<cstring>
#include<string.h>
#include<stack>
using namespace std;

int main()
{

	string c;
	cin>>c;
	int l=c.length();
	
	stack<int> s;
	s.push(-10);
	
	for(int i=0;i<l;i++)
	{
		if(c[i]=='C' || c[i]=='H' || c[i]=='O')
		{
			switch(c[i])
			{
				case 'C':
					s.push(12);break;
				case 'H':
					s.push(1);break;
				case 'O':
					s.push(16);break;
			}
		}
		
		else if(c[i]=='(')
			s.push(-1);
			
		else if(c[i]>='0' && c[i]<='9')
			{
				int temp=s.top();
				s.pop();
				s.push(temp*int(c[i]-'0'));
			}
			
		else if(c[i]==')')
		{
			int sum=0;
			while(s.top()!=-1 && s.top()!=-10)
			{
				sum+=s.top();
				s.pop();
			}
			
			if(s.top()==-1)
				s.pop();
				
			s.push(sum);
		}
		
		else{}
	}
	
	int final=0;
	while(s.top()!=-10)
	{
		final+=s.top();
		s.pop();
	}
	cout<<final;

}
