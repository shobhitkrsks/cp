#include<bits/stdc++.h>
using namespace std;

/* class NumArray {
public:
    int *ar;
    int **sumar;
    int n;

    NumArray(vector<int>& nums) {
        n=nums.size();
        ar=new int[n];
        for(int i=0;i<n;i++)
        {
            ar[i]=nums.at(i);
        }
        
        sumar=new int*[n];
        for(int i=0;i<n;i++)
        {
            sumar[i] = new int[n];
        }

        for(int i=0;i<n;i++)
        {
            int sum=0;
            for(int j=i;j<n;j++)
            {
                sumar[i][j]=sum+ar[j];
                sum=sumar[i][j];
            }
        }
    }
    
    void update(int index, int val) {
        int DIFF = val-ar[index];
        ar[index]=val;

        for(int i=0;i<=index;i++)
        {
            for(int j=index;j<n;j++)
            {
                sumar[i][j]+=DIFF;
            }
        }
    }
    
    int sumRange(int left, int right) {
        return sumar[left][right];
    }
}; */

class NumArray {
public:
    vector<int> ar;

    NumArray(vector<int>& nums) {
        ar.assign(nums.begin(), nums.end());
    }
    
    void update(int index, int val) {
        ar.at(index)=val;
    }
    
    int sumRange(int left, int right) {
        int sum = 0;
        for(int i=left; i<=right; i++)
        {
            sum+=ar.at(i);
        }

        return sum;
    }
};

int main()
{
    vector<int> v{9,-8};
    NumArray* obj = new NumArray(v);
    obj->update(0,3);
    cout<<obj->sumRange(1,1)<<"\n";
    cout<<obj->sumRange(0,1)<<"\n";
    obj->update(1,-3);
    cout<<obj->sumRange(0,1)<<"\n";
    
    return 0;
}