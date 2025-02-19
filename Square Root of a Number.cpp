int floorSqrt(int n)
{
    int s=1, e=n/2, m, ans=0;
    if(n==0 || n==1)
        return n;
    while(s<=e)
    {
        int m=s+(e-s)/2;
        if(m*m == n)
            return m;
        if(m*m <= n)
        {
            ans=m;
            s=m+1;
        }
        else
            e=m-1;           
    }
    return ans;
}
