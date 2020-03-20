//#include <iostream>
//#include <stack>
//using namespace std;
//
//int main() 
//{
//	int n;
//	do
//	{
//		
//		cin>>n;
//		
//		if(n==0)
//			break;
//		else
//		{
//			int ar[n];
//			for(int i=0;i<n;i++)
//				cin>>ar[i];
//			
//			stack<int> s;
//			
//			int flag=1;
//			int current=1;
//			
//			for(int i=0;i<n;i++)
//			{
//				if(ar[i]==current)
//				{
//					current++;
//				}
//				else if(!s.empty())
//				{
//					if(current==s.top())
//					{
//						while(current==s.top())
//						{
//							current++;
//							s.pop();
//						}
//						if(current<ar[i])
//						{
//							s.push(ar[i]);
//						}
//					}
//					else
//					{
//						if(ar[i]<s.top())
//						{
//							s.push(ar[i]);
//						}
//						else
//						{
//							flag=0;
//							break;
//						}
//					} 	
//				}
//				else
//				{
//					if(s.empty())
//					{
//						s.push(ar[i]);
//					}
//				}
//			}
//			
//			if(flag)
//			cout<<"yes\n";
//			else
//			cout<<"no\n";
//			
//		}
//	} while(n!=0);
//	
//	return 0;
//}

#include <iostream>
#include <stack>
using namespace std;

int main() 
{
	int n;
	do
	{
		cin>>n;
		
		if(n==0)
			break;
		else
		{
			int ar[n];
			for(int i=0;i<n;i++)
				cin>>ar[i];
			
			stack<int> s;
			int flag=1;
			int i=0,current=1;
			
			while(current<=n)
			{
				if(i<n)
				{
					if(current==ar[i])
					{
						current++;
						i++;
					}
					else
					{
						if(s.empty())
						{
							s.push(ar[i]);
							i++;   
						}
						else
						{
							if(current==s.top())
							{
								current++;
								s.pop();
							}
							else if(ar[i]<s.top())
							{
								s.push(ar[i]);
								i++;
							}
							else
							{
								flag=0;
								break;       
							}
						}
					}
				}
				else
				{
					break;
				}	
			}
			
			
			if(flag)
			cout<<"yes\n";
			else
			cout<<"no\n";
			
		}
	} while(n!=0);
	
	return 0;
}
