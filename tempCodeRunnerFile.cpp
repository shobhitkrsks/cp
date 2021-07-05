vector<int> res;
    int n=arr.size();
    int z=0;
    if(x>=arr[0] && x<=arr[n-1])
    {
        for(;z<n-1;z++)
        {
            if(arr[z]<=x && arr[z+1]>=x)
                break;
        }
    }
    

    int left=z,right=z+1;
    int count=0;

    while(left>=0 && right<n && count<k)
    {
        if(abs(arr[left]-x)<=abs(arr[right]-x))
        {
            res.push_back(arr[left--]);
        }
        else if(abs(arr[left]-x)>abs(arr[right]-x))
        {
            res.push_back(arr[right++]);
        }
        count++;
    }

    if(count!=k)
    {
        if(left>=0)
        {
            while(count!=k)
            {
                res.push_back(arr[left--]);
                count++;
            }
        }
    }
    if(count!=k)
    {
        if(right<n)
        {
            while(count!=k)
            {
                res.push_back(arr[right++]);
                count++;
            }
        }

    }

    sort(res.begin(), res.end());

    return res;