#include <vector>
int foccur(vector<int> &arr, int n, int k)
{
    int s=0, e=n-1, m, ans=-1;
    while(s <= e)
    {
        m=s+(e-s)/2;
        if(arr[m] == k)
        {
            ans = m;
            e = m-1;
        }
        else if(arr[m] < k)
            s = m+1;
        else
            e = m-1;
    }
    return ans;
}
int loccur(vector<int> &arr, int n, int k)
{
    int s=0, e=n-1, m, ans=-1;
    while(s <= e)
    {
        m=s+(e-s)/2;
        if(arr[m] == k)
        {
            ans = m;
            s = m+1;
        }
        else if(arr[m] < k)
            s = m+1;
        else
            e = m-1;
    }
    return ans;
}
pair<int, int> firstAndLastPosition(vector<int>& arr, int n, int k)
{
    pair<int,int> p;
    p.first = foccur(arr,n,k);
    p.second = loccur(arr,n,k);
    return p;
}
