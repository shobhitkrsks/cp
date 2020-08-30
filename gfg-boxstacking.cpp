#include<bits/stdc++.h>
using namespace std;

int maxHeight(int height[], int width[], int length[], int n);

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;

        int A[1000],B[1000],C[10001];
        for(int i=0;i<n;i++)
        {
            int a,b,c;
            cin>>a>>b>>c;
            A[i]=a;
            B[i]=b;
            C[i]=c;
        }

        cout<<maxHeight(A,B,C,n)<<endl;
    }

    return 0;
}

struct Box
{
    int l,b,h;
};

bool compfun(Box b1, Box b2)
{
    return (b1.l*b1.b)>=(b2.l*b2.b);
}

int maxHeight(int height[],int width[],int length[],int n)
{
    int index=0;
    Box box[3*n];
    for(int i=0;i<n;i++)
    {
        box[index].h=height[i];
        box[index].l=max(length[i],width[i]);
        box[index].b=min(length[i],width[i]);
        index++;
        
        box[index].h=length[i];
        box[index].l=max(height[i],width[i]);
        box[index].b=min(height[i],width[i]);
        index++;
        
        box[index].h=width[i];
        box[index].l=max(length[i],height[i]);
        box[index].b=min(length[i],height[i]);
        index++;
    }
    
    n=3*n;
    sort(box,box+n,compfun);
    
    int msh[n];
    for(int i=0;i<n;i++)
    {
        msh[i]=box[i].h;
    }
    
    int maxh=-1;
    for(int i=1;i<n;i++)
    {
        for(int j=0;j<i;j++)
        {
            if(box[i].l<box[j].l && box[i].b<box[j].b && msh[j]+box[i].h>msh[i])
            {
                msh[i]=msh[j]+box[i].h;
            }
        }
    }
    
    for ( int i = 0; i < n; i++ ) 
      if ( maxh < msh[i] ) 
         maxh = msh[i]; 
    
    return maxh; 
}