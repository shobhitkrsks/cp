#include<iostream>
#include<vector>
#include<time.h>

using namespace std;
int main()
{
	srand(time(0));
	for(int i=0;i<5;i++)
	{
		cout<<rand()%10<<" ";
	}
	cout<<endl;
	for(int i=0;i<5;i++)
	{
		cout<<rand()%10<<" ";
	}
	
	return 0;
}
