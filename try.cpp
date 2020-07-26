#include <iostream> 
using namespace std;
int N;
int dp[10010][10010],grid[10010][10010];

void extractnums(string s, int* ar)
{
    for(int i=0;i<N;i++)
    {
        ar[i]=s[i]-'0';
    }
}

int getsum(int r1,int r2,int c1,int c2)
{
    return dp[r2][c2]-dp[r2][c1]-dp[r1][c2]+dp[r1][c1];    
}

int sumfound(int S)
{
    for(int i=0;i<10010;i++)
    {
        for(int j=0;j<10010;j++)
        {
            dp[i][j]=0;
        }
    }
    
    for(int i=0;i<N;i++)
    {
        for(int j=0;j<N;j++)
        {
            dp[i+1][j+1]=dp[i+1][j]+dp[i][j+1]-dp[i][j]+grid[i][j];
        }
    }
    
    int count=0;
    for(int K=1;K<=N;K++)
    {
        for(int i=0;i<N;i+=K)
        {
            for(int j=0;j<N;j+=K)
            {
                int sum = getsum(i,i+K,j,j+K);
                
                if(sum==S)
                    count++;
            }
        }
    }

    return count;
}

int main() { 
    
    int tc;
    cin>>tc;
    int tc1=0;
    while(tc1++<tc)
    {
        int S;
        cin>>N>>S;
        
        string t;
        cin>>t;
        int ar[N];
        extractnums(t,&ar[0]);
        
        for(int i=0;i<10010;i++)
        {
            for(int j=0;j<10010;j++)
            {
                grid[i][j]=0;
            }
        }
        
        for(int i=0;i<N;i++)
        {
            for(int j=0;j<N;j++)
            {
                grid[i][j]=ar[i]+ar[j];
            }
        }
        
        cout<<"#"<<tc1<<" "<<sumfound(S)<<"\n";
        
    }
    return 0; 
} 
