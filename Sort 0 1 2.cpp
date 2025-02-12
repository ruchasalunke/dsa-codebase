#include <bits/stdc++.h> 
void sort012(int *arr, int n)
{
    int zero=0, one=0, two=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==0) zero++;
        else if(arr[i]==1) one++;
        else two++;
    }
    for(int i=0;i<zero;i++)
        arr[i] = 0;
    for(int i=zero;i<(one+zero);i++)
        arr[i] = 1;
    for(int i=(one+zero);i<n;i++)
        arr[i] = 2;        
}
