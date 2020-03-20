#include<iostream>
#include<stack>
#include<cstring>
#include<string.h>

using namespace std;

int prec(char c)
{
	if(c=='^')
		return 3;
	else if(c=='*' || c=='/')
		return 2;
	else if(c=='-' || c=='+')
		return 1;
	else
		return -1;
}

int main()
{
	int t;
	cin>>t;
	
	while(t--)
	{
		string op;
		
		stack<char> s;
		s.push('#');
		
		string c;
		cin>>c;
		int l=c.length();
		
		for(int i=0;i<l;i++)
		{
			if(c[i]>='a' && c[i]<='z')
				op+=c[i];
				
			else if(c[i]=='(')
				s.push('(');
				
			else if(c[i]==')')
			{
				while(s.top()!='#' && s.top()!='(')
				{
					char temp=s.top();
					s.pop();
					op+=temp;
				}
				if(s.top()=='(')
					s.pop();
			}
			else
			{
				while(s.top()!='#' && prec(c[i])<=prec(s.top()))
				{
					char temp=s.top();
					s.pop();
					op=+temp;
				}
				s.push(c[i]);
			}
		}
		
		while(s.top()!='#')
		{
			char temp=s.top();
			s.pop();
			op+=temp;
		}
		
		cout<<op<<endl;
		
	}
}
